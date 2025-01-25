#ifndef JSONER_ITEMMODEL_H
#define JSONER_ITEMMODEL_H

#include <Jsoner/global.h>
#include <Jsoner/array.h>

#include <QtCore/qabstractitemmodel.h>

namespace Jsoner {

class ItemModelPrivate;
class JSONER_EXPORT ItemModel : public QAbstractItemModel
{
    Q_OBJECT

public:
    explicit ItemModel(QObject *parent = nullptr);
    virtual ~ItemModel();

    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    bool setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role = Qt::EditRole) override;

    QVariant data(const QModelIndex &index, int role) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;

    QModelIndex index(int row, int column, const QModelIndex &parent) const override;
    QModelIndex parent(const QModelIndex &child) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant value(const QString &path, int index) const;
    void setValue(const QString &path, const QVariant &value, int index);

    Object object(int index) const;
    void setObject(int index, const Object &object);

    Array array() const;
    void setArray(const Array &array);

protected:
    ItemModel(ItemModelPrivate *d, QObject *parent = nullptr);

    virtual QString fieldName(int index) const = 0;
    virtual int fieldCount() const = 0;

    QScopedPointer<ItemModelPrivate> d_ptr;
};

}

#endif // JSONER_ITEMMODEL_H
