#ifndef CUTELOGGER_GLOBAL_H
#define CUTELOGGER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QT_SHARED) || !defined(QT_STATIC)
#  if defined(CUTELOGGER_LIBRARY)
#    define CUTELOGGERSHARED_EXPORT Q_DECL_EXPORT
#  else
#    define CUTELOGGERSHARED_EXPORT Q_DECL_IMPORT
#  endif
#else
#  define CUTELOGGERSHARED_EXPORT
#endif

#endif // CUTELOGGER_GLOBAL_H
