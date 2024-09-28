#ifndef LIBQT6OPENCV_GLOBAL_H
#define LIBQT6OPENCV_GLOBAL_H
#include <QtCore/qglobal.h>
#if defined(LIBQT6OPENCV_LIBRARY)
#  define LIBQT6OPENCV_EXPORT Q_DECL_EXPORT
#else
#  define LIBQT6OPENCV_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBQT6OPENCV_GLOBAL_H
