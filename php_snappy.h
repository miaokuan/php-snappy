
#ifndef PHP_SNAPPY_H
#define PHP_SNAPPY_H

#define SNAPPY_EXTENSION_VERSION "0.0.1"

extern zend_module_entry snappy_module_entry;
#define phpext_snappy_ptr &snappy_module_entry

#ifdef PHP_WIN32
#   define PHP_SNAPPY_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#   define PHP_SNAPPY_API __attribute__ ((visibility("default")))
#else
#   define PHP_SNAPPY_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

#ifdef ZTS
#define SNAPPY_G(v) TSRMG(snappy_globals_id, zend_snappy_globals *, v)
#else
#define SNAPPY_G(v) (snappy_globals.v)
#endif

#endif  /* PHP_SNAPPY_H */
