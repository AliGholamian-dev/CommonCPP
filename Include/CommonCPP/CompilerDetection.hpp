#pragma once

/// TODO: Introduce an enum
#if defined(__INTEL_COMPILER) || defined(__INTEL_LLVM_COMPILER)
    #define Common_Compiler_Intel
#elif defined(__clang__)
    #define Common_Compiler_Clang
#elif defined(__GNUC__)
    #define Common_Compiler_GCC
#elif defined(_MSC_VER)
    #define Common_Compiler_MSVC
#else
    #define Common_Compiler_Unknown
    #error "[ Compiler ]: Unknown compiler"
#endif
