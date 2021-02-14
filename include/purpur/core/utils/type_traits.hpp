
#ifndef _PURPURINA_FRWK_TYPE_TRAITS_HPP_
#define _PURPURINA_FRWK_TYPE_TRAITS_HPP_

#include <purpur/core/config/compiler_features.hpp>

namespace ppr {

	// Remove reference

	///
	/// @brief Provides the non-reference type to which `T` refers.
	///
	template<class T>
	struct remove_reference {
		using type = T; //!< type referred by T
	};

	///
	/// @brief Provides the non-reference type to which `T&` refers.
	///
	template<class T>
	struct remove_reference<T &> {
		using type = T; //!< type referred by T
	};

	///
	/// @brief Provides the non-reference type to which `T&&` refers.
	///
	template<class T>
	struct remove_reference<T &&> {
		using type = T; //!< type referred by T
	};


	///
	/// @brief Defines non reference type from T
	///
	template<class T>
	using remove_reference_t = typename remove_reference<T>::type;



	// move

	////////////////////////////////////////////////////////////
	/// @brief Returns an _rvalue_ reference to argument.
	///
	////////////////////////////////////////////////////////////
	template<class T>
	NODISCARD CONSTEXPR remove_reference_t<T> && move(T && arg) NOEXCEPT {
		return static_cast<remove_reference_t<T> &&>(arg);
	}

	////////////////////////////////////////////////////////////
	/// @brief `static_cast` to `rvalue` reference.
	///
	/// This macro is an version of move semantics.
	/// The reason to use this macro is that improves compilation time.
	///
	/// @see https://www.foonathan.net/2020/09/move-forward/#self-documenting-code
	///
	////////////////////////////////////////////////////////////
	#define MOV(...) \
		 static_cast<ppr::remove_reference_t<decltype(__VA_ARGS__)>&&>(__VA_ARGS__)


    ////////////////////////////////////////////////////////////
    /// @brief Forward an _lvalue_ as either an _lvalue_ or an rvalue
    ///
    ////////////////////////////////////////////////////////////
	#define FWD(...) \
		static_cast<decltype(__VA_ARGS__)&&>(__VA_ARGS__)



} // namespace ppr

#endif
