#ifndef LIBHK_GLOBAL_H
#define LIBHK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBHK_LIBRARY)
#  define LIBHKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBHKSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBHK_GLOBAL_H
