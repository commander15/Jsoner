#include "array.h"
#include "object.h"

namespace Jsoner {

/**
 * @brief Constructs an Array from a QJsonArray.
 *
 * This constructor creates an Array from an existing QJsonArray.
 *
 * @param other The QJsonArray to copy.
 */
Array::Array(const QJsonArray &other)
    : QJsonArray(other)
{
}

/**
 * @brief Constructs an Array by moving from a QJsonArray.
 *
 * This constructor initializes an Array by transferring ownership of the
 * given QJsonArray's resources.
 *
 * @param other The QJsonArray to move from.
 */
Array::Array(QJsonArray &&other)
    : QJsonArray(std::move(other))
{
}

/**
 * @brief Assigns a QJsonArray to this Array.
 *
 * This operator assigns a QJsonArray to the current Array. It performs
 * a deep copy of the data.
 *
 * @param other The QJsonArray to assign from.
 * @return Reference to this Array.
 */
Array &Array::operator=(const QJsonArray &other)
{
    if (this != &other) {
        QJsonArray::operator=(other);
    }
    return *this;
}

/**
 * @brief Move-assigns a QJsonArray to this Array.
 *
 * This operator moves the contents of the given QJsonArray into this
 * Array, transferring ownership of the resources.
 *
 * @param other The QJsonArray to move from.
 * @return Reference to this Array.
 */
Array &Array::operator=(QJsonArray &&other)
{
    if (this != &other) {
        QJsonArray::operator=(std::move(other));
    }
    return *this;
}

/**
 * @brief Retrieves a boolean value for an index.
 *
 * This method retrieves the boolean value stored at the specified index.
 * If the index doesn't exist, it returns false.
 *
 * @param index The index to retrieve the value for.
 * @return The boolean value associated with the index.
 */
bool Array::boolean(int index) const
{
    if (index < 0 || index >= size())
        return false;
    return at(index).toBool();
}

/**
 * @brief Retrieves a boolean value for an index, or returns a default value if the index does not exist.
 *
 * This method retrieves the boolean value stored at the specified index.
 * If the index doesn't exist, it returns the provided default value.
 *
 * @param index The index to retrieve the value for.
 * @param defaultValue The default value to return if the index does not exist.
 * @return The boolean value associated with the index, or the default value.
 */
bool Array::boolean(int index, bool defaultValue) const
{
    if (index < 0 || index >= size())
        return defaultValue;
    return at(index).toBool();
}

/**
 * @brief Retrieves an integer value for an index.
 *
 * This method retrieves the integer value stored at the specified index.
 *
 * @param index The index to retrieve the value for.
 * @return The integer value associated with the index.
 */
int Array::integer(int index) const
{
    if (index < 0 || index >= size())
        return 0;
    return at(index).toInt();
}

/**
 * @brief Retrieves an integer value for an index, or returns a default value if the index does not exist.
 *
 * This method retrieves the integer value stored at the specified index.
 * If the index doesn't exist, it returns the provided default value.
 *
 * @param index The index to retrieve the value for.
 * @param defaultValue The default value to return if the index does not exist.
 * @return The integer value associated with the index, or the default value.
 */
int Array::integer(int index, int defaultValue) const
{
    if (index < 0 || index >= size())
        return defaultValue;
    return at(index).toInt();
}

/**
 * @brief Retrieves a double value for an index.
 *
 * This method retrieves the double value stored at the specified index.
 *
 * @param index The index to retrieve the value for.
 * @return The double value associated with the index.
 */
double Array::number(int index) const
{
    if (index < 0 || index >= size())
        return 0.0;
    return at(index).toDouble();
}

/**
 * @brief Retrieves a double value for an index, or returns a default value if the index does not exist.
 *
 * This method retrieves the double value stored at the specified index.
 * If the index doesn't exist, it returns the provided default value.
 *
 * @param index The index to retrieve the value for.
 * @param defaultValue The default value to return if the index does not exist.
 * @return The double value associated with the index, or the default value.
 */
double Array::number(int index, double defaultValue) const
{
    if (index < 0 || index >= size())
        return defaultValue;
    return at(index).toDouble();
}

/**
 * @brief Retrieves a string value for an index.
 *
 * This method retrieves the string value stored at the specified index.
 *
 * @param index The index to retrieve the value for.
 * @return The string value associated with the index.
 */
QString Array::string(int index) const
{
    if (index < 0 || index >= size())
        return QString();
    return at(index).toString();
}

/**
 * @brief Retrieves a string value for an index, or returns a default value if the index does not exist.
 *
 * This method retrieves the string value stored at the specified index.
 * If the index doesn't exist, it returns the provided default value.
 *
 * @param index The index to retrieve the value for.
 * @param defaultValue The default value to return if the index does not exist.
 * @return The string value associated with the index, or the default value.
 */
QString Array::string(int index, const QString &defaultValue) const
{
    if (index < 0 || index >= size())
        return defaultValue;
    return at(index).toString();
}

/**
 * @brief Retrieves an Object value for an index.
 *
 * This method retrieves the Object stored at the specified index.
 *
 * @param index The index to retrieve the value for.
 * @return The Object value associated with the index.
 */
Object Array::object(int index) const
{
    if (index < 0 || index >= size())
        return Object();
    return at(index).toObject();
}

/**
 * @brief Retrieves an Array value for an index.
 *
 * This method retrieves the Array stored at the specified index.
 *
 * @param index The index to retrieve the value for.
 * @return The Array value associated with the index.
 */
Array Array::array(int index) const
{
    if (index < 0 || index >= size())
        return Array();
    return at(index).toArray();
}

/**
 * @brief Retrieves a QVariant value for an index.
 *
 * This method retrieves the QVariant value stored at the specified index.
 *
 * @param index The index to retrieve the value for.
 * @return The QVariant value associated with the index.
 */
QVariant Array::variant(int index) const
{
    if (index < 0 || index >= size())
        return QVariant();
    return at(index).toVariant();
}

/**
 * @brief Checks equality with another QJsonArray.
 *
 * This operator compares this Array with another QJsonArray for equality.
 *
 * @param other The QJsonArray to compare with.
 * @return True if equal, false otherwise.
 */
bool Array::operator==(const QJsonArray &other) const
{
    return other == *this;
}

/**
 * @brief Checks inequality with another QJsonArray.
 *
 * This operator compares this Array with another QJsonArray for inequality.
 *
 * @param other The QJsonArray to compare with.
 * @return True if not equal, false otherwise.
 */
bool Array::operator!=(const QJsonArray &other) const
{
    return !operator==(other);
}

} // namespace Jsoner
