

#ifndef _PURPURINA_CORE_EXPORTS_HPP_
#define _PURPURINA_CORE_EXPORTS_HPP_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <purpurina/Config.hpp>


////////////////////////////////////////////////////////////
// Define portable import / export macros
////////////////////////////////////////////////////////////
#ifdef PURPURINA_CORE_EXPORTS

    #define PURPURINA_CORE_API PURPURINA_API_EXPORT

#else

    #define PURPURINA_CORE_API PURPURINA_API_IMPORT

#endif


#endif