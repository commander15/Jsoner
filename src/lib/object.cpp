#include "object.h"

#include <Jsoner/array.h>

namespace Jsoner {

/**
 * @class Object
 * @brief A wrapper class for QJsonObject providing additional utility methods for extracting values.
 *
 * This class extends QJsonObject to provide convenience methods for extracting values
 * of different types (boolean, integer, double, string, etc.) from a JSON object.
 * It simplifies accessing values stored in JSON objects by supporting methods for
 * type-safe retrieval and handling default values for missing keys.
 */
Object::Object(const QJsonObject &other)
    : QJsonObject(other)
{
}

/**
 * @brief Constructs an Object by moving from a QJsonObject.
 *
 * This constructor initializes an Object by transferring ownership of the
 * given QJsonObject's resources.
 *
 * @param other The QJsonObject to move from.
 */
Object::Object(QJsonObject &&other)
    : QJsonObject(std::move(other))
{
}

/**
 * @brief Assigns a QJsonObject to this Object.
 *
 * This operator assigns a QJsonObject to the current Object. It performs
 * a deep copy of the data.
 *
 * @param other The QJsonObject to assign from.
 * @return Reference to this Object.
 */
Object &Object::operator=(const QJsonObject &other)
{
    QJsonObject::operator=(other);
    return *this;
}

/**
 * @brief Move-assigns a QJsonObject to this Object.
 *
 * This operator moves the contents of the given QJsonObject into this
 * Object, transferring ownership of the resources.
 *
 * @param other The QJsonObject to move from.
 * @return Reference to this Object.
 */
Object &Object::operator=(QJsonObject &&other)
{
    QJsonObject::operator=(std::move(other));
    return *this;
}

/**
 * @brief Checks if the Object contains a specific key.
 *
 * This method checks if the Object contains a specific key.
 *
 * @param key The key to check for.
 * @return True if the key exists, false otherwise.
 */
bool Object::has(const QString &key) const
{
    return contains(key);
}

/**
 * @brief Retrieves a boolean value for a key.
 *
 * This method retrieves the boolean value stored at the specified key.
 * If the key doesn't exist, it returns a default value (false).
 *
 * @param key The key to retrieve the value for.
 * @return The boolean value associated with the key.
 */
bool Object::boolean(const QString &key) const
{
    return variant(key).toBool();
}

/**
 * @brief Retrieves a boolean value for a key, or returns a default value if the key does not exist.
 *
 * This method retrieves the boolean value stored at the specified key.
 * If the key doesn't exist, it returns the provided default value.
 *
 * @param key The key to retrieve the value for.
 * @param defaultValue The default value to return if the key does not exist.
 * @return The boolean value associated with the key, or the default value.
 */
bool Object::boolean(const QString &key, bool defaultValue) const
{
    return has(key) ? variant(key).toBool() : defaultValue;
}

/**
 * @brief Retrieves an integer value for a key.
 *
 * This method retrieves the integer value stored at the specified key.
 *
 * @param key The key to retrieve the value for.
 * @return The integer value associated with the key.
 */
int Object::integer(const QString &key) const
{
    return variant(key).toInt();
}

/**
 * @brief Retrieves an integer value for a key, or returns a default value if the key does not exist.
 *
 * This method retrieves the integer value stored at the specified key.
 * If the key doesn't exist, it returns the provided default value.
 *
 * @param key The key to retrieve the value for.
 * @param defaultValue The default value to return if the key does not exist.
 * @return The integer value associated with the key, or the default value.
 */
int Object::integer(const QString &key, int defaultValue) const
{
    return has(key) ? variant(key).toInt() : defaultValue;
}

/**
 * @brief Retrieves a double value for a key.
 *
 * This method retrieves the double value stored at the specified key.
 *
 * @param key The key to retrieve the value for.
 * @return The double value associated with the key.
 */
double Object::number(const QString &key) const
{
    return variant(key).toDouble();
}

/**
 * @brief Retrieves a double value for a key, or returns a default value if the key does not exist.
 *
 * This method retrieves the double value stored at the specified key.
 * If the key doesn't exist, it returns the provided default value.
 *
 * @param key The key to retrieve the value for.
 * @param defaultValue The default value to return if the key does not exist.
 * @return The double value associated with the key, or the default value.
 */
double Object::number(const QString &key, double defaultValue) const
{
    return has(key) ? variant(key).toDouble() : defaultValue;
}

/**
 * @brief Retrieves a string value for a key.
 *
 * This method retrieves the string value stored at the specified key.
 *
 * @param key The key to retrieve the value for.
 * @return The string value associated with the key.
 */
QString Object::string(const QString &key) const
{
    return variant(key).toString();
}

/**
 * @brief Retrieves a string value for a key, or returns a default value if the key does not exist.
 *
 * This method retrieves the string value stored at the specified key.
 * If the key doesn't exist, it returns the provided default value.
 *
 * @param key The key to retrieve the value for.
 * @param defaultValue The default value to return if the key does not exist.
 * @return The string value associated with the key, or the default value.
 */
QString Object::string(const QString &key, const QString &defaultValue) const
{
    return has(key) ? variant(key).toString() : defaultValue;
}

/**
 * @brief Retrieves a QVariant value for a key.
 *
 * This method retrieves the QVariant value stored at the specified key.
 *
 * @param key The key to retrieve the value for.
 * @return The QVariant value associated with the key.
 */
QVariant Object::variant(const QString &key) const
{
    return value(key).toVariant();
}

/**
 * @brief Retrieves a QVariant value for a key, or returns a default value if the key does not exist.
 *
 * This method retrieves the QVariant value stored at the specified key.
 * If the key doesn't exist, it returns the provided default value.
 *
 * @param key The key to retrieve the value for.
 * @param defaultValue The default value to return if the key does not exist.
 * @return The QVariant value associated with the key, or the default value.
 */
QVariant Object::variant(const QString &key, const QVariant &defaultValue) const
{
    return has(key) ? value(key).toVariant() : defaultValue;
}

/**
 * @brief Retrieves an Object value for a key.
 *
 * This method retrieves the Object stored at the specified key.
 *
 * @param key The key to retrieve the value for.
 * @return The Object value associated with the key.
 */
Object Object::object(const QString &key) const
{
    return Object(value(key).toObject());
}

/**
 * @brief Retrieves an Array value for a key.
 *
 * This method retrieves the Array stored at the specified key.
 *
 * @param key The key to retrieve the value for.
 * @return The Array value associated with the key.
 */
Array Object::array(const QString &key) const
{
    return Array(value(key).toArray());
}

/**
 * @brief Inserts or updates a key-value pair in the Object.
 *
 * This method inserts a new key-value pair, or updates the value if the key
 * already exists in the Object.
 *
 * @param key The key to insert or update.
 * @param value The value to associate with the key.
 */
void Object::put(const QString &key, const QVariant &value)
{
    insert(key, QJsonValue::fromVariant(value));
}

/**
 * @brief Checks equality with another QJsonObject.
 *
 * This operator compares this Object with another QJsonObject for equality.
 *
 * @param other The QJsonObject to compare with.
 * @return True if equal, false otherwise.
 */
bool Object::operator==(const QJsonObject &other) const
{
    return other == *this;
}

/**
 * @brief Checks inequality with another QJsonObject.
 *
 * This operator compares this Object with another QJsonObject for inequality.
 *
 * @param other The QJsonObject to compare with.
 * @return True if not equal, false otherwise.
 */
bool Object::operator!=(const QJsonObject &other) const
{
    return !operator==(other);
}

} // namespace Jsoner
