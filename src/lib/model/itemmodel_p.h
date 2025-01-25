#ifndef JSONER_ITEMMODEL_P_H
#define JSONER_ITEMMODEL_P_H

#include "itemmodel.h"

namespace Jsoner {

class ItemModelPrivate
{
public:
    ItemModelPrivate(ItemModel *q);

    ItemModel *q_ptr;

    QMap<int, QVariant> headers;
    Array array;
};

}

#endif // JSONER_ITEMMODEL_P_H
