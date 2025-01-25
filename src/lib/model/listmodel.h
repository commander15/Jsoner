#ifndef JSONER_LISTMODEL_H
#define JSONER_LISTMODEL_H

#include <Jsoner/global.h>
#include <Jsoner/itemmodel.h>

namespace Jsoner {

class ListModelPrivate;
class JSONER_EXPORT ListModel : public Jsoner::ItemModel
{
    Q_OBJECT

public:
    explicit ListModel(QObject *parent = nullptr);

    QString field() const;
    void setField(const QString &field);

protected:
    QString fieldName(int index) const override;
    int fieldCount() const override;
};

} // namespace Jsoner

#endif // JSONER_LISTMODEL_H
