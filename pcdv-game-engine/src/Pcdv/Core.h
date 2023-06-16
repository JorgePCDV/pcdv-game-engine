#pragma once

#ifdef PCDV_PLATFORM_WINDOWS
    #ifdef PCDV_BUILD_DLL
        #define PCDV_API __declspec(dllexport)
    #else
        #define PCDV_API __declspec(dllimport)
    #endif
#else
    #error Pcdv only supports Windows!
#endif
