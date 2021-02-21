////////////////////////////////////////////////////////////
// Chronotrix Framework
//
// \todo Copyright notice
//
////////////////////////////////////////////////////////////
///
/// \ingroup chronotrix-core
/// \file AssertHandler.hpp
/// \author Tobias Ulrich <flamenco.bluegrass@gmail.com>
/// \date September 25, 2020
///
////////////////////////////////////////////////////////////

#ifndef _CHRONOTRIX_FRWK_ASSERT_HANDLER_HPP_
#define _CHRONOTRIX_FRWK_ASSERT_HANDLER_HPP_

#include <ct/core/config/compiler_features.hpp>
#include <ct/core/export.hpp>
#include <ct/core/types.hpp>

namespace ct {
	namespace internal {
		namespace Assert {

			enum class Action
			{
				None,
				Ignore,
				Break,
				Throw,
				Abort,
			};

			enum class Level
			{
				Warning = 8,
				Debug = 16,
				Error = 32,
				Fatal = 64
			};

			CT_CORE_API Action get_action(Level level = Level::Error,
			                                    bool * ignore = NULLPTR);

			CT_CORE_API cstr handle(cstr file,
			                               int32 line,
			                               cstr function,
			                               cstr expression,
			                               bool * ignore,
			                               cstr message,
			                               ...);

			CT_CORE_API bool ignore_all_asserts();
		} // namespace Assert

	}  // namespace internal

} // namespace ct

#endif