#include "itemmodel.h"
#include "itemmodel_p.h"

#include <Jsoner/object.h>

namespace Jsoner {

ItemModel::ItemModel(QObject *parent)
    : ItemModel(new ItemModelPrivate(this), parent)
{
}

ItemModel::ItemModel(ItemModelPrivate *d, QObject *parent)
    : QAbstractItemModel{parent}
    , d_ptr(d)
{
}

ItemModel::~ItemModel()
{
}

QVariant ItemModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (orientation == Qt::Horizontal && (role == Qt::DisplayRole || role == Qt::EditRole)) {
        if (d_ptr->headers.contains(section))
            return d_ptr->headers.value(section);
        else if (section < columnCount())
            return fieldName(section);
    }

    return QAbstractItemModel::headerData(section, orientation, role);
}

bool ItemModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role)
{
    if (orientation == Qt::Horizontal && (role == Qt::DisplayRole || role == Qt::EditRole)) {
        d_ptr->headers.insert(section, value);
        emit headerDataChanged(orientation, section, section);
        return true;
    }

    return QAbstractItemModel::setHeaderData(section, orientation, value, role);
}

QVariant ItemModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole || role == Qt::EditRole) {
        return value(fieldName(index.column()), index.row());
    } else {
        return QVariant();
    }
}

bool ItemModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (role == Qt::DisplayRole || role == Qt::EditRole) {
        setValue(fieldName(index.column()), value, index.row());
        emit dataChanged(index, index, { Qt::DisplayRole, Qt::EditRole });
        return true;
    } else {
        return false;
    }
}

QModelIndex ItemModel::index(int row, int column, const QModelIndex &parent) const
{
    return createIndex(row, column, row);
}

QModelIndex ItemModel::parent(const QModelIndex &child) const
{
    return QModelIndex();
}

int ItemModel::rowCount(const QModelIndex &parent) const
{
    return (!parent.isValid() ? d_ptr->array.size() : 0);
}

int ItemModel::columnCount(const QModelIndex &parent) const
{
    return (!parent.isValid() ? fieldCount() : 0);
}

QVariant ItemModel::value(const QString &path, int index) const
{
    const QStringList keys = path.split('.'); // Assume dot notation for sub-objects
    QJsonValue currentValue = d_ptr->array.at(index);

    for (const QString &key : keys) {
        if (currentValue.isObject()) {
            currentValue = currentValue.toObject().value(key);
        } else if (currentValue.isArray()) {
            bool ok = false;
            int arrayIndex = key.toInt(&ok);  // Try converting key to an integer (for array access)
            if (!ok || arrayIndex < 0 || arrayIndex >= currentValue.toArray().size()) {
                return QVariant();  // Invalid index or path
            }
            currentValue = currentValue.toArray().at(arrayIndex);
        } else {
            return QVariant();  // Invalid path
        }
    }

    return currentValue.toVariant();
}

void ItemModel::setValue(const QString &path, const QVariant &value, int index)
{
    QStringList keys = path.split('.');
    QJsonValue currentValue = d_ptr->array.at(index);

    // Traverse the path to find the final object or array
    for (int i = 0; i < keys.size() - 1; ++i) {
        const QString &key = keys.at(i);

        if (currentValue.isObject()) {
            currentValue = currentValue.toObject().value(key);
        } else if (currentValue.isArray()) {
            bool ok = false;
            int arrayIndex = key.toInt(&ok);
            if (!ok || arrayIndex < 0 || arrayIndex >= currentValue.toArray().size()) {
                return;  // Invalid path
            }
            currentValue = currentValue.toArray().at(arrayIndex);
        } else {
            return;  // Invalid path
        }
    }

    // Final key-value update
    const QString &finalKey = keys.last();
    if (currentValue.isObject()) {
        QJsonObject obj = currentValue.toObject();
        obj.insert(finalKey, QJsonValue::fromVariant(value));
        d_ptr->array[index] = QJsonValue(obj);
    } else if (currentValue.isArray()) {
        bool ok = false;
        int arrayIndex = finalKey.toInt(&ok);
        if (ok && arrayIndex >= 0 && arrayIndex < currentValue.toArray().size()) {
            QJsonArray array = currentValue.toArray();
            array[arrayIndex] = QJsonValue::fromVariant(value);
            d_ptr->array[index] = QJsonValue(array);
        }
    }
}

Object ItemModel::object(int index) const
{
    return d_ptr->array.object(index);
}

void ItemModel::setObject(int index, const Object &object)
{
    beginInsertRows(QModelIndex(), index, index);
    d_ptr->array.insert(index, object);
    endInsertRows();
}

Array ItemModel::array() const
{
    return d_ptr->array;
}

void ItemModel::setArray(const Array &array)
{
    beginResetModel();
    d_ptr->array = array;
    endResetModel();
}

ItemModelPrivate::ItemModelPrivate(ItemModel *q)
    : q_ptr(q)
{
}

}
