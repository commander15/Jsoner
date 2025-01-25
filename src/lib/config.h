#ifndef JSONER_CONFIG_H
#define JSONER_CONFIG_H

#include <QtCore/qglobal.h>

#define JSONER_VERSION_MAJOR 1
#define JSONER_VERSION_MINOR 0
#define JSONER_VERSION_PATCH 0
#define JSONER_VERSION_STR   "1.0.0"
#define JSONER_VERSION       JSONER_VERSION_CHECK(JSONER_VERSION_MAJOR, JSONER_VERSION_MINOR, JSONER_VERSION_PATCH)
#define JSONER_VERSION_CHECK QT_VERSION_CHECK

#define JSONER_DEBUG QT_DEBUG

#endif // JSONER_CONFIG_H