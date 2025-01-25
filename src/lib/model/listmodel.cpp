#include "listmodel.h"
#include "listmodel_p.h"

#include <Jsoner/object.h>

namespace Jsoner {

ListModel::ListModel(QObject *parent)
    : Jsoner::ItemModel(new ListModelPrivate(this), parent)
{
}

QString ListModel::field() const
{
    JSONER_D(const ListModel);
    return (!d->fieldDiscovered ? d->field : QString());
}

void ListModel::setField(const QString &field)
{
    JSONER_D(ListModel);

    beginResetModel();

    if (!field.isEmpty()) {
        d->field = field;
        d->fieldDiscovered = false;
    } else if (!d->array.isEmpty()) {
        const QStringList fields = d->array.object(0).keys();
        d->field = (!fields.isEmpty() ? fields.first() : QString());
        d->fieldDiscovered = !d->field.isEmpty();
    }

    endResetModel();
}

QString ListModel::fieldName(int index) const
{
    JSONER_D(const ListModel);
    return d->field;
}

int ListModel::fieldCount() const
{
    return 1;
}

} // namespace Jsoner
