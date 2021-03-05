
#ifndef _CHRONOTRIX_FRWK_WINDOW_HANDLE_HPP_
#define _CHRONOTRIX_FRWK_WINDOW_HANDLE_HPP_

#include <ct/core/config/os_detection.hpp>
#include <ct/core/types.hpp>

#ifdef CT_OS_WINDOWS
struct HWND__;
#endif

namespace ct {

#if defined(CT_OS_WINDOWS)

	typedef HWND__ * WindowHandle;

#elif defined(CT_OS_MACOS)

	#ifdef __OBJC__
		#import <AppKit/AppKit.h>
	typedef NSWindow * WindowHandle;
	#else
	typedef void * WindowHandle;
	#endif

#else
	typedef void * WindowHandle;
#endif

} // namespace ct

#endif
