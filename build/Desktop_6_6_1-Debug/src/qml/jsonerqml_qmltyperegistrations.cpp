/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <jsonlistmodel.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Jsoner()
{
    qmlRegisterTypesAndRevisions<JsonListModel>("Jsoner", 1);
    qmlRegisterTypesAndRevisions<JsonListModelRole>("Jsoner", 1);
    QMetaType::fromType<QAbstractItemModel *>().id();
    QMetaType::fromType<QAbstractListModel *>().id();
    qmlRegisterModule("Jsoner", 1, 0);
}

static const QQmlModuleRegistration registration("Jsoner", qml_register_types_Jsoner);
