#ifndef GUMBO_WINDOWS_COMPAT_H_
#define GUMBO_WINDOWS_COMPAT_H_

#if defined(_WIN32) || defined(_WIN64)
#  include <string.h>
#  ifndef strcasecmp
#    define strcasecmp _stricmp
#  endif
#  ifndef strncasecmp
#    define strncasecmp _strnicmp
#  endif
#else
#  include <string.h>
#  include <strings.h>
#endif

#endif  // GUMBO_WINDOWS_COMPAT_H_

