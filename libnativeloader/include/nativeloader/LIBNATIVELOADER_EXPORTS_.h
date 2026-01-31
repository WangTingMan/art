#pragma once
#if defined(WIN32) || defined(_MSC_VER)

#if defined(LIBNATIVELOADER_EXPORTS)
#define LIBNATIVELOADER_API __declspec(dllexport)
#else
#define LIBNATIVELOADER_API __declspec(dllimport)
#endif  // defined(LIBNATIVELOADER_EXPORTS)

#else  // defined(WIN32)
#if defined(LIBNATIVELOADER_EXPORTS)
#define LIBNATIVELOADER_API __attribute__((visibility("default")))
#else
#define LIBNATIVELOADER_API
#endif  // defined(LIBNATIVELOADER_EXPORTS)
#endif