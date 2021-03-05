// clang-format off
#ifndef _CHRONOTRIX_FRWK_VERSION_HPP_
#define _CHRONOTRIX_FRWK_VERSION_HPP_

#include <ct/core/utils/helper_macros.hpp>

////////////////////////////////////////////////////////////
/// @brief Chronotrix framework major version
////////////////////////////////////////////////////////////
#define CT_FRWK_VERSION_MAJOR 0
////////////////////////////////////////////////////////////
/// @brief Chronotrix framework minor version
////////////////////////////////////////////////////////////
#define CT_FRWK_VERSION_MINOR 0
////////////////////////////////////////////////////////////
/// @brief Chronotrix framework path level
////////////////////////////////////////////////////////////
#define CT_FRWK_VERSION_PATCH 1

////////////////////////////////////////////////////////////
/// @brief Printable format of Chronotrix Framework version
///
/// @c "vX.Y.Z"
////////////////////////////////////////////////////////////
#define CT_FRWK_VERSION	"v" \
		CT_STRINGER(CT_FRWK_VERSION_MAJOR) "." \
		CT_STRINGER(CT_FRWK_VERSION_MINOR) "." \
		CT_STRINGER(CT_FRWK_VERSION_PATCH)

#endif
