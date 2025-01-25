#ifndef JSONER_DEBUG_H
#define JSONER_DEBUG_H

#include <Jsoner/global.h>

#include <QtCore/qloggingcategory.h>

#define jsonerDebug()    qCDebug(jsoner).noquote().nospace()
#define jsonerInfo()     qCInfo(jsoner).noquote().nospace()
#define jsonerWarning()  qCWarning(jsoner).noquote().nospace()
#define jsonerCritical() qCCritical(jsoner).noquote().nospace()

JSONER_EXPORT Q_DECLARE_LOGGING_CATEGORY(jsoner)

#endif // JSONER_DEBUG_H
