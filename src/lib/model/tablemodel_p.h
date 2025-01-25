#ifndef JSONER_TABLEMODEL_P_H
#define JSONER_TABLEMODEL_P_H

#include "tablemodel.h"

#include <Jsoner/private/itemmodel_p.h>

namespace Jsoner {

class TableModelPrivate : public ItemModelPrivate
{
public:
    TableModelPrivate(TableModel *q);

    QStringList fields;
    bool fieldsDiscovered;
};

}

#endif // JSONER_TABLEMODEL_P_H
