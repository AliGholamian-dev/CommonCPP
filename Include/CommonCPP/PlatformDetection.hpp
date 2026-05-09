#pragma once

#if defined(_WIN64)
    #define Common_Platform_Windows64
    #define Common_Platform_Windows
#elif defined(_WIN32)
    #define Common_Platform_Windows32
    #define Common_Platform_Windows
#elif defined(__ANDROID__)
    #define Common_Platform_Android
#elif defined(__linux__)
    #define Common_Platform_Linux
#else
    #define Common_Platform_Unknown
    #error "[ Platform ]: Unknown platform"
#endif
