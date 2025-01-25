#ifndef JSONER_ARRAY_H
#define JSONER_ARRAY_H

#include <Jsoner/global.h>
#include <QtCore/qjsonarray.h>

namespace Jsoner {

class Object;

class JSONER_EXPORT Array : public QJsonArray
{
public:
    Array() = default;
    Array(const QJsonArray &other);
    Array(QJsonArray &&other);

    Array &operator=(const QJsonArray &other);
    Array &operator=(QJsonArray &&other);

    bool boolean(int index) const;
    bool boolean(int index, bool defaultValue) const;

    int integer(int index) const;
    int integer(int index, int defaultValue) const;

    double number(int index) const;
    double number(int index, double defaultValue) const;

    QString string(int index) const;
    QString string(int index, const QString &defaultValue) const;

    Object object(int index) const;

    Array array(int index) const;

    QVariant variant(int index) const;

    bool operator==(const QJsonArray &other) const;
    bool operator!=(const QJsonArray &other) const;
};

} // namespace Jsoner

#endif // JSONER_ARRAY_H
