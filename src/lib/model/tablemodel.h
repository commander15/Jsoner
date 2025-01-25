#ifndef JSONER_TABLEMODEL_H
#define JSONER_TABLEMODEL_H

#include <Jsoner/global.h>
#include <Jsoner/itemmodel.h>
#include <Jsoner/object.h>

namespace Jsoner {

class JsonTableModelPrivate;
class JSONER_EXPORT TableModel : public Jsoner::ItemModel
{
    Q_OBJECT

public:
    explicit TableModel(QObject *parent = nullptr);

    QStringList fields() const;
    void setFields(const QStringList &fields);

protected:
    QString fieldName(int index) const override;
    int fieldCount() const override;
};

} // namespace Jsoner

#endif // JSONER_TABLEMODEL_H
