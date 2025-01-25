#ifndef JSONER_GLOBAL_H
#define JSONER_GLOBAL_H

#include <Jsoner/config.h>

#ifdef JSONER_SHARED
#   ifdef JSONER_BUILD
#       define JSONER_EXPORT Q_DECL_EXPORT
#   else
#       define JSONER_EXPORT Q_DECL_IMPORT
#   endif
#else
#   define JSONER_EXPORT
#endif

#define JSONER_D(ClassName) ClassName##Private *d = static_cast<ClassName##Private *>(qGetPtrHelper(d_ptr))

class QString;
class QByteArray;
class QVariant;

#endif // JSONER_GLOBAL_H
