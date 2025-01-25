#ifndef JSONER_OBJECT_H
#define JSONER_OBJECT_H

#include <Jsoner/global.h>

#include <QtCore/qjsonobject.h>

namespace Jsoner {

class Array;

class JSONER_EXPORT Object : public QJsonObject
{
public:
    Object() = default;
    Object(const QJsonObject &other);
    Object(QJsonObject &&other);

    Object &operator=(const QJsonObject &other);
    Object &operator=(QJsonObject &&other);

    bool has(const QString &key) const;

    bool boolean(const QString &key) const;
    bool boolean(const QString &key, bool defaultValue) const;

    int integer(const QString &key) const;
    int integer(const QString &key, int defaultValue) const;

    double number(const QString &key) const;
    double number(const QString &key, double defaultValue) const;

    QString string(const QString &key) const;
    QString string(const QString &key, const QString &defaultValue) const;

    QVariant variant(const QString &key) const;
    QVariant variant(const QString &key, const QVariant &defaultValue) const;

    Object object(const QString &key) const;
    Array array(const QString &key) const;

    void put(const QString &key, const QVariant &value);

    bool operator==(const QJsonObject &other) const;
    bool operator!=(const QJsonObject &other) const;
};

} // namespace Jsoner

#endif // JSONER_OBJECT_H
