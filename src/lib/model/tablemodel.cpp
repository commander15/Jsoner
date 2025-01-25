#include "tablemodel.h"
#include "tablemodel_p.h"

namespace Jsoner {

TableModel::TableModel(QObject *parent)
    : Jsoner::ItemModel(new TableModelPrivate(this), parent)
{
}

QStringList TableModel::fields() const
{
    JSONER_D(const TableModel);
    return (!d->fieldsDiscovered ? d->fields : QStringList());
}

void TableModel::setFields(const QStringList &fields)
{
    JSONER_D(TableModel);

    beginResetModel();

    if (!fields.isEmpty()) {
        d->fields = fields;
        d->fieldsDiscovered = false;
    } else if (d->array.size() > 0) {
        d->fields = d->array.object(0).keys();
        d->fieldsDiscovered = true;
    } else {
        // No-op
    }

    endResetModel();
}

QString TableModel::fieldName(int index) const
{
    JSONER_D(const TableModel);
    return d->fields.at(index);
}

int TableModel::fieldCount() const
{
    JSONER_D(const TableModel);
    return d->fields.size();
}

TableModelPrivate::TableModelPrivate(TableModel *q)
    : ItemModelPrivate(q)
    , fieldsDiscovered(false)
{
}

} // namespace Jsoner
