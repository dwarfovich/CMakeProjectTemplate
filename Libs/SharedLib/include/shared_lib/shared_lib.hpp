#pragma once

#include <string>

#ifdef _WIN32
    #define EXPORT_SPEC __declspec(dllexport)
#else
    #define EXPORT_SPEC
#endif

EXPORT_SPEC std::string sharedLibFunc();