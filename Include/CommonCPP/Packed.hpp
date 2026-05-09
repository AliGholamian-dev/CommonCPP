#pragma once

#include "CommonCpp/CompilerDetection.hpp"

#if defined(Common_Compiler_GCC) || defined(Common_Compiler_CLang) || defined(Common_Compiler_Intel)
    #define Common_Packed_Struct_Start
    #define Common_Packed_Struct_End
    #define Common_Packed_Struct_Attribute __attribute__((packed))
#elif defined(Common_Compiler_MSVC)
    #define Common_Packed_Struct_Start     __pragma(pack(push, 1))
    #define Common_Packed_Struct_End       __pragma(pack(pop))
    #define Common_Packed_Struct_Attribute
#else
    #define Common_Packed_Struct_Start
    #define Common_Packed_Struct_End
    #define Common_Packed_Struct_Attribute
    #error "[ Packing ]: Packing not supported or unknown compiler"
#endif
