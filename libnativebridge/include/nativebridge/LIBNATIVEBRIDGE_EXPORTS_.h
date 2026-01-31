#pragma once


#if defined(WIN32) || defined(_MSC_VER)

#if defined(LIBNATIVEBRIDGE_EXPORTS)
#define LIBNATIVEBRIDGE_API __declspec(dllexport)
#else
#define LIBNATIVEBRIDGE_API __declspec(dllimport)
#endif  // defined(LIBNATIVEBRIDGE_EXPORTS)

#else  // defined(WIN32)
#if defined(LIBNATIVEBRIDGE_EXPORTS)
#define LIBNATIVEBRIDGE_API __attribute__((visibility("default")))
#else
#define LIBNATIVEBRIDGE_API
#endif  // defined(LIBNATIVEBRIDGE_EXPORTS)
#endif
