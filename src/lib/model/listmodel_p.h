#ifndef JSONER_LISTMODEL_P_H
#define JSONER_LISTMODEL_P_H

#include "listmodel.h"

#include <Jsoner/private/itemmodel_p.h>

namespace Jsoner {

class ListModelPrivate : public ItemModelPrivate
{
public:
    ListModelPrivate(ListModel *q);

    QString field;
    bool fieldDiscovered;
};

} // namespace Jsoner

#endif // JSONER_LISTMODEL_P_H
