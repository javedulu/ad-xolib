
#ifndef XODR_EXPORT_H
#define XODR_EXPORT_H

#ifdef XODR_STATIC_DEFINE
#  define XODR_EXPORT
#  define XODR_NO_EXPORT
#else
#  ifndef XODR_EXPORT
#    ifdef xodr_EXPORTS
        /* We are building this library */
#      define XODR_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define XODR_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef XODR_NO_EXPORT
#    define XODR_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef XODR_DEPRECATED
#  define XODR_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef XODR_DEPRECATED_EXPORT
#  define XODR_DEPRECATED_EXPORT XODR_EXPORT XODR_DEPRECATED
#endif

#ifndef XODR_DEPRECATED_NO_EXPORT
#  define XODR_DEPRECATED_NO_EXPORT XODR_NO_EXPORT XODR_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef XODR_NO_DEPRECATED
#    define XODR_NO_DEPRECATED
#  endif
#endif

#endif /* XODR_EXPORT_H */
