// Standard iostream objects -*- C++ -*-

// Copyright (C) 1997-2018 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/iostream
 *  This is a Standard C++ Library header.
 */

//
// ISO C++ 14882: 27.3  Standard iostream objects
//

#ifndef _GLIBCXX_IOSTREAM
#define _GLIBCXX_IOSTREAM 1

#pragma GCC system_header

#include <bits/c++config.h> //filenya tidak ada di folder bits, saya juga bingung kenapa bisa seperti itu

// ************* OSTREAM REGION WHICH WE REPLACE WITH REAL CODE, NOT USING PREPROCESSING DIRECTIVE INCLUDE ***************

//#include <ostream> //  seharusnya tidak usah pakai ini karena dibawahnya ada baris code ostream, oleh sebab itu 
// Output streams -*- C++ -*-

// Copyright (C) 1997-2018 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/ostream
 *  This is a Standard C++ Library header.
 */

//
// ISO C++ 14882: 27.6.2  Output streams
//

#ifndef _GLIBCXX_OSTREAM
#define _GLIBCXX_OSTREAM 1

#pragma GCC system_header

// ***** IOS REGION *******

//#include <ios>
// Iostreams base classes -*- C++ -*-

// Copyright (C) 1997-2018 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/ios
 *  This is a Standard C++ Library header.
 */

//
// ISO C++ 14882: 27.4  Iostreams base classes
//

#ifndef _GLIBCXX_IOS
#define _GLIBCXX_IOS 1

#pragma GCC system_header


// ********* REGION OF IOSFWD **********

//#include <iosfwd> artinya iosforward

// <iosfwd> Forward declarations -*- C++ -*-

// Copyright (C) 1997-2018 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/iosfwd
 *  This is a Standard C++ Library header.
 */

//
// ISO C++ 14882: 27.2  Forward declarations
//

#ifndef _GLIBCXX_IOSFWD
#define _GLIBCXX_IOSFWD 1

#pragma GCC system_header

    #include <bits/c++config.h>

    // ************* REGION OF STRINGFWD ***********

      //#include <bits/stringfwd.h> 	// For string forward declarations.

      // <string> Forward declarations -*- C++ -*-

      // Copyright (C) 2001-2018 Free Software Foundation, Inc.
      //
      // This file is part of the GNU ISO C++ Library.  This library is free
      // software; you can redistribute it and/or modify it under the
      // terms of the GNU General Public License as published by the
      // Free Software Foundation; either version 3, or (at your option)
      // any later version.

      // This library is distributed in the hope that it will be useful,
      // but WITHOUT ANY WARRANTY; without even the implied warranty of
      // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      // GNU General Public License for more details.

      // Under Section 7 of GPL version 3, you are granted additional
      // permissions described in the GCC Runtime Library Exception, version
      // 3.1, as published by the Free Software Foundation.

      // You should have received a copy of the GNU General Public License and
      // a copy of the GCC Runtime Library Exception along with this program;
      // see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
      // <http://www.gnu.org/licenses/>.

      /** @file bits/stringfwd.h
      *  This is an internal header file, included by other library headers.
      *  Do not attempt to use it directly. @headername{string}
      */

      //
      // ISO C++ 14882: 21 Strings library
      //

      #ifndef _STRINGFWD_H
      #define _STRINGFWD_H 1

      #pragma GCC system_header

      #include <bits/c++config.h>
      #include <bits/memoryfwd.h>

      namespace std _GLIBCXX_VISIBILITY(default)
      {
      _GLIBCXX_BEGIN_NAMESPACE_VERSION

      /**
      *  @defgroup strings Strings
      *
      *  @{
      */

      template<class _CharT>
          struct char_traits;

      template<> struct char_traits<char>;

      #ifdef _GLIBCXX_USE_WCHAR_T
        template<> struct char_traits<wchar_t>;
      #endif

      #if ((__cplusplus >= 201103L) \
          && defined(_GLIBCXX_USE_C99_STDINT_TR1))
      template<> struct char_traits<char16_t>;
      template<> struct char_traits<char32_t>;
      #endif

      _GLIBCXX_BEGIN_NAMESPACE_CXX11

      template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
        class basic_string;

      /// A string of @c char
        typedef basic_string<char>    string;   

      #ifdef _GLIBCXX_USE_WCHAR_T
      /// A string of @c wchar_t
      typedef basic_string<wchar_t> wstring;   
      #endif

      #if ((__cplusplus >= 201103L) \
        && defined(_GLIBCXX_USE_C99_STDINT_TR1))
      /// A string of @c char16_t
      typedef basic_string<char16_t> u16string; 

  /// A string of @c char32_t
  typedef basic_string<char32_t> u32string; 
#endif

_GLIBCXX_END_NAMESPACE_CXX11

  /** @}  */

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace std

#endif	// _STRINGFWD_H


// ************* END REGION OF STRINGFWD **********


#include <bits/postypes.h>

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /**
   *  @defgroup io I/O
   *
   *  Nearly all of the I/O classes are parameterized on the type of
   *  characters they read and write.  (The major exception is ios_base at
   *  the top of the hierarchy.)  This is a change from pre-Standard
   *  streams, which were not templates.
   *
   *  For ease of use and compatibility, all of the basic_* I/O-related
   *  classes are given typedef names for both of the builtin character
   *  widths (wide and narrow).  The typedefs are the same as the
   *  pre-Standard names, for example:
   *
   *  @code
   *     typedef basic_ifstream<char>  ifstream;
   *  @endcode
   *
   *  Because properly forward-declaring these classes can be difficult, you
   *  should not do it yourself.  Instead, include the &lt;iosfwd&gt;
   *  header, which contains only declarations of all the I/O classes as
   *  well as the typedefs.  Trying to forward-declare the typedefs
   *  themselves (e.g., <code>class ostream;</code>) is not valid ISO C++.
   *
   *  For more specific declarations, see
   *  https://gcc.gnu.org/onlinedocs/libstdc++/manual/io.html#std.io.objects
   *
   *  @{
  */
  class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;


_GLIBCXX_BEGIN_NAMESPACE_CXX11

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
	    typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
	   typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
	   typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
	   typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

_GLIBCXX_END_NAMESPACE_CXX11

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;


  /// Base class for @c char streams.
  typedef basic_ios<char> 		ios;

  /// Base class for @c char buffers.
  typedef basic_streambuf<char> 	streambuf;

  /// Base class for @c char input streams.
  typedef basic_istream<char> 		istream;

  /// Base class for @c char output streams.
  typedef basic_ostream<char> 		ostream;

  /// Base class for @c char mixed input and output streams.
  typedef basic_iostream<char> 		iostream;

  /// Class for @c char memory buffers.
  typedef basic_stringbuf<char> 	stringbuf;

  /// Class for @c char input memory streams.
  typedef basic_istringstream<char> 	istringstream;

  /// Class for @c char output memory streams.
  typedef basic_ostringstream<char> 	ostringstream;

  /// Class for @c char mixed input and output memory streams.
  typedef basic_stringstream<char> 	stringstream;

  /// Class for @c char file buffers.
  typedef basic_filebuf<char> 		filebuf;

  /// Class for @c char input file streams.
  typedef basic_ifstream<char> 		ifstream;

  /// Class for @c char output file streams.
  typedef basic_ofstream<char> 		ofstream;

  /// Class for @c char mixed input and output file streams.
  typedef basic_fstream<char> 		fstream;

#ifdef _GLIBCXX_USE_WCHAR_T
  /// Base class for @c wchar_t streams.
  typedef basic_ios<wchar_t> 		wios;

  /// Base class for @c wchar_t buffers.
  typedef basic_streambuf<wchar_t> 	wstreambuf;

  /// Base class for @c wchar_t input streams.
  typedef basic_istream<wchar_t> 	wistream;

  /// Base class for @c wchar_t output streams.
  typedef basic_ostream<wchar_t> 	wostream;

  /// Base class for @c wchar_t mixed input and output streams.
  typedef basic_iostream<wchar_t> 	wiostream;

  /// Class for @c wchar_t memory buffers.
  typedef basic_stringbuf<wchar_t> 	wstringbuf;

  /// Class for @c wchar_t input memory streams.
  typedef basic_istringstream<wchar_t> 	wistringstream;

  /// Class for @c wchar_t output memory streams.
  typedef basic_ostringstream<wchar_t> 	wostringstream;

  /// Class for @c wchar_t mixed input and output memory streams.
  typedef basic_stringstream<wchar_t> 	wstringstream;

  /// Class for @c wchar_t file buffers.
  typedef basic_filebuf<wchar_t> 	wfilebuf;

  /// Class for @c wchar_t input file streams.
  typedef basic_ifstream<wchar_t> 	wifstream;

  /// Class for @c wchar_t output file streams.
  typedef basic_ofstream<wchar_t> 	wofstream;

  /// Class for @c wchar_t mixed input and output file streams.
  typedef basic_fstream<wchar_t> 	wfstream;
#endif
  /** @}  */

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#endif /* _GLIBCXX_IOSFWD */

//********* END REGION OF IOSFWD *********


#include <exception> 		// For ios_base::failure
#include <bits/char_traits.h> 	// For char_traits, streamoff, streamsize, fpos
#include <bits/localefwd.h>	// For class locale
#include <bits/ios_base.h>	// For ios_base declarations.
#include <streambuf>
#include <bits/basic_ios.h>

#endif	/* _GLIBCXX_IOS */

// ***** END OF IOS REGION ******

#include <bits/ostream_insert.h>

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /**
   *  @brief  Template class basic_ostream.
   *  @ingroup io
   *
   *  @tparam _CharT  Type of character stream.
   *  @tparam _Traits  Traits for character type, defaults to
   *                   char_traits<_CharT>.
   *
   *  This is the base class for all output streams.  It provides text
   *  formatting of all builtin types, and communicates with any class
   *  derived from basic_streambuf to do the actual output.
  */
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:
      // Types (inherited from basic_ios):
      typedef _CharT			 		char_type;
      typedef typename _Traits::int_type 		int_type;
      typedef typename _Traits::pos_type 		pos_type;
      typedef typename _Traits::off_type 		off_type;
      typedef _Traits			 		traits_type;

      // Non-standard Types:
      typedef basic_streambuf<_CharT, _Traits> 		__streambuf_type;
      typedef basic_ios<_CharT, _Traits>		__ios_type;
      typedef basic_ostream<_CharT, _Traits>		__ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
      							__num_put_type;
      typedef ctype<_CharT>	      			__ctype_type;

      /**
       *  @brief  Base constructor.
       *
       *  This ctor is almost never called by the user directly, rather from
       *  derived classes' initialization lists, which pass a pointer to
       *  their own stream buffer.
      */
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }

      /**
       *  @brief  Base destructor.
       *
       *  This does very little apart from providing a virtual base dtor.
      */
      virtual
      ~basic_ostream() { }

      /// Safe prefix/suffix operations.
      class sentry;
      friend class sentry;

      //@{
      /**
       *  @brief  Interface for manipulators.
       *
       *  Manipulators such as @c std::endl and @c std::hex use these
       *  functions in constructs like "std::cout << std::endl".  For more
       *  information, see the iomanip header.
      */
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {
	// _GLIBCXX_RESOLVE_LIB_DEFECTS
	// DR 60. What is a formatted input function?
	// The inserters for manipulators are *not* formatted output functions.
	return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {
	// _GLIBCXX_RESOLVE_LIB_DEFECTS
	// DR 60. What is a formatted input function?
	// The inserters for manipulators are *not* formatted output functions.
	__pf(*this);
	return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {
	// _GLIBCXX_RESOLVE_LIB_DEFECTS
	// DR 60. What is a formatted input function?
	// The inserters for manipulators are *not* formatted output functions.
	__pf(*this);
	return *this;
      }
      //@}

      //@{
      /**
       *  @name Inserters
       *
       *  All the @c operator<< functions (aka <em>formatted output
       *  functions</em>) have some common behavior.  Each starts by
       *  constructing a temporary object of type std::basic_ostream::sentry.
       *  This can have several effects, concluding with the setting of a
       *  status flag; see the sentry documentation for more.
       *
       *  If the sentry status is good, the function tries to generate
       *  whatever data is appropriate for the type of the argument.
       *
       *  If an exception is thrown during insertion, ios_base::badbit
       *  will be turned on in the stream's error state without causing an
       *  ios_base::failure to be thrown.  The original exception will then
       *  be rethrown.
      */

      //@{
      /**
       *  @brief Integer arithmetic inserters
       *  @param  __n A variable of builtin integral type.
       *  @return  @c *this if successful
       *
       *  These functions use the stream's current locale (specifically, the
       *  @c num_get facet) to perform numeric formatting.
      */
      __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {
	// _GLIBCXX_RESOLVE_LIB_DEFECTS
	// 117. basic_ostream uses nonexistent num_put member functions.
	return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {
	// _GLIBCXX_RESOLVE_LIB_DEFECTS
	// 117. basic_ostream uses nonexistent num_put member functions.
	return _M_insert(static_cast<unsigned long>(__n));
      }

#ifdef _GLIBCXX_USE_LONG_LONG
      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }
#endif
      //@}

      //@{
      /**
       *  @brief  Floating point arithmetic inserters
       *  @param  __f A variable of builtin floating point type.
       *  @return  @c *this if successful
       *
       *  These functions use the stream's current locale (specifically, the
       *  @c num_get facet) to perform numeric formatting.
      */
      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(float __f)
      {
	// _GLIBCXX_RESOLVE_LIB_DEFECTS
	// 117. basic_ostream uses nonexistent num_put member functions.
	return _M_insert(static_cast<double>(__f));
      }

      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }
      //@}

      /**
       *  @brief  Pointer arithmetic inserters
       *  @param  __p A variable of pointer type.
       *  @return  @c *this if successful
       *
       *  These functions use the stream's current locale (specifically, the
       *  @c num_get facet) to perform numeric formatting.
      */
      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }

      /**
       *  @brief  Extracting from another streambuf.
       *  @param  __sb  A pointer to a streambuf
       *
       *  This function behaves like one of the basic arithmetic extractors,
       *  in that it also constructs a sentry object and has the same error
       *  handling behavior.
       *
       *  If @p __sb is NULL, the stream will set failbit in its error state.
       *
       *  Characters are extracted from @p __sb and inserted into @c *this
       *  until one of the following occurs:
       *
       *  - the input stream reaches end-of-file,
       *  - insertion into the output sequence fails (in this case, the
       *    character that would have been inserted is not extracted), or
       *  - an exception occurs while getting a character from @p __sb, which
       *    sets failbit in the error state
       *
       *  If the function inserts no characters, failbit is set.
      */
      __ostream_type&
      operator<<(__streambuf_type* __sb);
      //@}

      //@{
      /**
       *  @name Unformatted Output Functions
       *
       *  All the unformatted output functions have some common behavior.
       *  Each starts by constructing a temporary object of type
       *  std::basic_ostream::sentry.  This has several effects, concluding
       *  with the setting of a status flag; see the sentry documentation
       *  for more.
       *
       *  If the sentry status is good, the function tries to generate
       *  whatever data is appropriate for the type of the argument.
       *
       *  If an exception is thrown during insertion, ios_base::badbit
       *  will be turned on in the stream's error state.  If badbit is on in
       *  the stream's exceptions mask, the exception will be rethrown
       *  without completing its actions.
      */

      /**
       *  @brief  Simple insertion.
       *  @param  __c  The character to insert.
       *  @return  *this
       *
       *  Tries to insert @p __c.
       *
       *  @note  This function is not overloaded on signed char and
       *         unsigned char.
      */
      __ostream_type&
      put(char_type __c);

      /**
       *  @brief  Core write functionality, without sentry.
       *  @param  __s  The array to insert.
       *  @param  __n  Maximum number of characters to insert.
      */
      void
      _M_write(const char_type* __s, streamsize __n)
      {
	const streamsize __put = this->rdbuf()->sputn(__s, __n);
	if (__put != __n)
	  this->setstate(ios_base::badbit);
      }

      /**
       *  @brief  Character string insertion.
       *  @param  __s  The array to insert.
       *  @param  __n  Maximum number of characters to insert.
       *  @return  *this
       *
       *  Characters are copied from @p __s and inserted into the stream until
       *  one of the following happens:
       *
       *  - @p __n characters are inserted
       *  - inserting into the output sequence fails (in this case, badbit
       *    will be set in the stream's error state)
       *
       *  @note  This function is not overloaded on signed char and
       *         unsigned char.
      */
      __ostream_type&
      write(const char_type* __s, streamsize __n);
      //@}

      /**
       *  @brief  Synchronizing the stream buffer.
       *  @return  *this
       *
       *  If @c rdbuf() is a null pointer, changes nothing.
       *
       *  Otherwise, calls @c rdbuf()->pubsync(), and if that returns -1,
       *  sets badbit.
      */
      __ostream_type&
      flush();

      /**
       *  @brief  Getting the current write position.
       *  @return  A file position object.
       *
       *  If @c fail() is not false, returns @c pos_type(-1) to indicate
       *  failure.  Otherwise returns @c rdbuf()->pubseekoff(0,cur,out).
      */
      pos_type
      tellp();

      /**
       *  @brief  Changing the current write position.
       *  @param  __pos  A file position object.
       *  @return  *this
       *
       *  If @c fail() is not true, calls @c rdbuf()->pubseekpos(pos).  If
       *  that function fails, sets failbit.
      */
      __ostream_type&
      seekp(pos_type);

      /**
       *  @brief  Changing the current write position.
       *  @param  __off  A file offset object.
       *  @param  __dir  The direction in which to seek.
       *  @return  *this
       *
       *  If @c fail() is not true, calls @c rdbuf()->pubseekoff(off,dir).
       *  If that function fails, sets failbit.
      */
       __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      basic_ostream()
      { this->init(0); }

#if __cplusplus >= 201103L
      // Non-standard constructor that does not call init()
      basic_ostream(basic_iostream<_CharT, _Traits>&) { }

      basic_ostream(const basic_ostream&) = delete;

      basic_ostream(basic_ostream&& __rhs)
      : __ios_type()
      { __ios_type::move(__rhs); }

      // 27.7.3.3 Assign/swap

      basic_ostream& operator=(const basic_ostream&) = delete;

      basic_ostream&
      operator=(basic_ostream&& __rhs)
      {
	swap(__rhs);
	return *this;
      }

      void
      swap(basic_ostream& __rhs)
      { __ios_type::swap(__rhs); }
#endif

      template<typename _ValueT>
	__ostream_type&
	_M_insert(_ValueT __v);
    };

  /**
   *  @brief  Performs setup work for output streams.
   *
   *  Objects of this class are created before all of the standard
   *  inserters are run.  It is responsible for <em>exception-safe prefix and
   *  suffix operations</em>.
  */
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {
      // Data Members.
      bool 				_M_ok;
      basic_ostream<_CharT, _Traits>& 	_M_os;

    public:
      /**
       *  @brief  The constructor performs preparatory work.
       *  @param  __os  The output stream to guard.
       *
       *  If the stream state is good (@a __os.good() is true), then if the
       *  stream is tied to another output stream, @c is.tie()->flush()
       *  is called to synchronize the output sequences.
       *
       *  If the stream state is still good, then the sentry state becomes
       *  true (@a okay).
      */
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);

      /**
       *  @brief  Possibly flushes the stream.
       *
       *  If @c ios_base::unitbuf is set in @c os.flags(), and
       *  @c std::uncaught_exception() is true, the sentry destructor calls
       *  @c flush() on the output stream.
      */
      ~sentry()
      {
	// XXX MT
	if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
	  {
	    // Can't call flush directly or else will get into recursive lock.
	    if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
	      _M_os.setstate(ios_base::badbit);
	  }
      }

      /**
       *  @brief  Quick status checking.
       *  @return  The sentry state.
       *
       *  For ease of use, sentries may be converted to booleans.  The
       *  return value is that of the sentry state (true == okay).
      */
#if __cplusplus >= 201103L
      explicit
#endif
      operator bool() const
      { return _M_ok; }
    };

  //@{
  /**
   *  @brief  Character inserters
   *  @param  __out  An output stream.
   *  @param  __c  A character.
   *  @return  out
   *
   *  Behaves like one of the formatted arithmetic inserters described in
   *  std::basic_ostream.  After constructing a sentry object with good
   *  status, this function inserts a single character and any required
   *  padding (as determined by [22.2.2.2.2]).  @c __out.width(0) is then
   *  called.
   *
   *  If @p __c is of type @c char and the character type of the stream is not
   *  @c char, the character is widened before insertion.
  */
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }

  // Specialization
  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }

  // Signed and unsigned
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
  //@}

  //@{
  /**
   *  @brief  String inserters
   *  @param  __out  An output stream.
   *  @param  __s  A character string.
   *  @return  out
   *  @pre  @p __s must be a non-NULL pointer
   *
   *  Behaves like one of the formatted arithmetic inserters described in
   *  std::basic_ostream.  After constructing a sentry object with good
   *  status, this function inserts @c traits::length(__s) characters starting
   *  at @p __s, widened if necessary, followed by any required padding (as
   *  determined by [22.2.2.2.2]).  @c __out.width(0) is then called.
  */
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
	__out.setstate(ios_base::badbit);
      else
	__ostream_insert(__out, __s,
			 static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);

  // Partial specializations
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
	__out.setstate(ios_base::badbit);
      else
	__ostream_insert(__out, __s,
			 static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  // Signed and unsigned
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
  //@}

  // Standard basic_ostream manipulators

  /**
   *  @brief  Write a newline and flush the stream.
   *
   *  This manipulator is often mistakenly used when a simple newline is
   *  desired, leading to poor buffering performance.  See
   *  https://gcc.gnu.org/onlinedocs/libstdc++/manual/streambufs.html#io.streambuf.buffering
   *  for more on this subject.
  */
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }

  /**
   *  @brief  Write a null character into the output sequence.
   *
   *  <em>Null character</em> is @c CharT() by definition.  For CharT
   *  of @c char, this correctly writes the ASCII @c NUL character
   *  string terminator.
  */
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }

  /**
   *  @brief  Flushes the output stream.
   *
   *  This manipulator simply calls the stream's @c flush() member function.
  */
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }

#if __cplusplus >= 201103L
  template<typename _Ch, typename _Up>
    basic_ostream<_Ch, _Up>&
    __is_convertible_to_basic_ostream_test(basic_ostream<_Ch, _Up>*);

  template<typename _Tp, typename = void>
    struct __is_convertible_to_basic_ostream_impl
    {
      using __ostream_type = void;
    };

  template<typename _Tp>
    using __do_is_convertible_to_basic_ostream_impl =
    decltype(__is_convertible_to_basic_ostream_test
	     (declval<typename remove_reference<_Tp>::type*>()));

  template<typename _Tp>
    struct __is_convertible_to_basic_ostream_impl
    <_Tp,
     __void_t<__do_is_convertible_to_basic_ostream_impl<_Tp>>>
    {
      using __ostream_type =
	__do_is_convertible_to_basic_ostream_impl<_Tp>;
    };

  template<typename _Tp>
    struct __is_convertible_to_basic_ostream
    : __is_convertible_to_basic_ostream_impl<_Tp>
    {
    public:
      using type = __not_<is_void<
        typename __is_convertible_to_basic_ostream_impl<_Tp>::__ostream_type>>;
      constexpr static bool value = type::value;
    };

  template<typename _Ostream, typename _Tp, typename = void>
    struct __is_insertable : false_type {};

  template<typename _Ostream, typename _Tp>
    struct __is_insertable<_Ostream, _Tp,
			   __void_t<decltype(declval<_Ostream&>()
					     << declval<const _Tp&>())>>
				    : true_type {};

  template<typename _Ostream>
    using __rvalue_ostream_type =
      typename __is_convertible_to_basic_ostream<
	_Ostream>::__ostream_type;

  /**
   *  @brief  Generic inserter for rvalue stream
   *  @param  __os  An input stream.
   *  @param  __x  A reference to the object being inserted.
   *  @return  os
   *
   *  This is just a forwarding function to allow insertion to
   *  rvalue streams since they won't bind to the inserter functions
   *  that take an lvalue reference.
  */
  template<typename _Ostream, typename _Tp>
    inline
    typename enable_if<__and_<__not_<is_lvalue_reference<_Ostream>>,
			      __is_convertible_to_basic_ostream<_Ostream>,
			      __is_insertable<
				__rvalue_ostream_type<_Ostream>,
				const _Tp&>>::value,
		       __rvalue_ostream_type<_Ostream>>::type
    operator<<(_Ostream&& __os, const _Tp& __x)
    {
      __rvalue_ostream_type<_Ostream> __ret_os = __os;
      __ret_os << __x;
      return __ret_os;
    }
#endif // C++11

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace std

#include <bits/ostream.tcc>

#endif	/* _GLIBCXX_OSTREAM */

// *************** END OF OSTREAM ******************


// ************* ISTREAM REGION WHICH WE REPLACE WITH REAL CODE, NOT USING PREPROCESSING DIRECTIVE INCLUDE ***************
//#include <istream>
// Input streams -*- C++ -*-

// Copyright (C) 1997-2018 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

//
// ISO C++ 14882: 27.6.1  Input streams
//

/** @file include/istream
 *  This is a Standard C++ Library header.
 */

#ifndef _GLIBCXX_ISTREAM
#define _GLIBCXX_ISTREAM 1

#pragma GCC system_header

#include <ios>
#include <ostream>

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /**
   *  @brief  Template class basic_istream.
   *  @ingroup io
   *
   *  @tparam _CharT  Type of character stream.
   *  @tparam _Traits  Traits for character type, defaults to
   *                   char_traits<_CharT>.
   *
   *  This is the base class for all input streams.  It provides text
   *  formatting of all builtin types, and communicates with any class
   *  derived from basic_streambuf to do the actual input.
  */
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:
      // Types (inherited from basic_ios (27.4.4)):
      typedef _CharT			 		char_type;
      typedef typename _Traits::int_type 		int_type;
      typedef typename _Traits::pos_type 		pos_type;
      typedef typename _Traits::off_type 		off_type;
      typedef _Traits			 		traits_type;

      // Non-standard Types:
      typedef basic_streambuf<_CharT, _Traits> 		__streambuf_type;
      typedef basic_ios<_CharT, _Traits>		__ios_type;
      typedef basic_istream<_CharT, _Traits>		__istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
 							__num_get_type;
      typedef ctype<_CharT>	      			__ctype_type;

    protected:
      // Data Members:
      /**
       *  The number of characters extracted in the previous unformatted
       *  function; see gcount().
      */
      streamsize 		_M_gcount;

    public:
      /**
       *  @brief  Base constructor.
       *
       *  This ctor is almost never called by the user directly, rather from
       *  derived classes' initialization lists, which pass a pointer to
       *  their own stream buffer.
      */
      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }

      /**
       *  @brief  Base destructor.
       *
       *  This does very little apart from providing a virtual base dtor.
      */
      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }

      /// Safe prefix/suffix operations.
      class sentry;
      friend class sentry;

      //@{
      /**
       *  @brief  Interface for manipulators.
       *
       *  Manipulators such as @c std::ws and @c std::dec use these
       *  functions in constructs like
       *  <code>std::cin >> std::ws</code>.
       *  For more information, see the iomanip header.
      */
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
	__pf(*this);
	return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
	__pf(*this);
	return *this;
      }
      //@}

      //@{
      /**
       *  @name Extractors
       *
       *  All the @c operator>> functions (aka <em>formatted input
       *  functions</em>) have some common behavior.  Each starts by
       *  constructing a temporary object of type std::basic_istream::sentry
       *  with the second argument (noskipws) set to false.  This has several
       *  effects, concluding with the setting of a status flag; see the
       *  sentry documentation for more.
       *
       *  If the sentry status is good, the function tries to extract
       *  whatever data is appropriate for the type of the argument.
       *
       *  If an exception is thrown during extraction, ios_base::badbit
       *  will be turned on in the stream's error state (without causing an
       *  ios_base::failure to be thrown) and the original exception will
       *  be rethrown if badbit is set in the exceptions mask.
      */

      //@{
      /**
       *  @brief  Integer arithmetic extractors
       *  @param  __n A variable of builtin integral type.
       *  @return  @c *this if successful
       *
       *  These functions use the stream's current locale (specifically, the
       *  @c num_get facet) to parse the input data.
      */
      __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }

#ifdef _GLIBCXX_USE_LONG_LONG
      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }
#endif
      //@}

      //@{
      /**
       *  @brief  Floating point arithmetic extractors
       *  @param  __f A variable of builtin floating point type.
       *  @return  @c *this if successful
       *
       *  These functions use the stream's current locale (specifically, the
       *  @c num_get facet) to parse the input data.
      */
      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }
      //@}

      /**
       *  @brief  Basic arithmetic extractors
       *  @param  __p A variable of pointer type.
       *  @return  @c *this if successful
       *
       *  These functions use the stream's current locale (specifically, the
       *  @c num_get facet) to parse the input data.
      */
      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }

      /**
       *  @brief  Extracting into another streambuf.
       *  @param  __sb  A pointer to a streambuf
       *
       *  This function behaves like one of the basic arithmetic extractors,
       *  in that it also constructs a sentry object and has the same error
       *  handling behavior.
       *
       *  If @p __sb is NULL, the stream will set failbit in its error state.
       *
       *  Characters are extracted from this stream and inserted into the
       *  @p __sb streambuf until one of the following occurs:
       *
       *  - the input stream reaches end-of-file,
       *  - insertion into the output buffer fails (in this case, the
       *    character that would have been inserted is not extracted), or
       *  - an exception occurs (and in this case is caught)
       *
       *  If the function inserts no characters, failbit is set.
      */
      __istream_type&
      operator>>(__streambuf_type* __sb);
      //@}

      // [27.6.1.3] unformatted input
      /**
       *  @brief  Character counting
       *  @return  The number of characters extracted by the previous
       *           unformatted input function dispatched for this stream.
      */
      streamsize
      gcount() const
      { return _M_gcount; }

      //@{
      /**
       *  @name Unformatted Input Functions
       *
       *  All the unformatted input functions have some common behavior.
       *  Each starts by constructing a temporary object of type
       *  std::basic_istream::sentry with the second argument (noskipws)
       *  set to true.  This has several effects, concluding with the
       *  setting of a status flag; see the sentry documentation for more.
       *
       *  If the sentry status is good, the function tries to extract
       *  whatever data is appropriate for the type of the argument.
       *
       *  The number of characters extracted is stored for later retrieval
       *  by gcount().
       *
       *  If an exception is thrown during extraction, ios_base::badbit
       *  will be turned on in the stream's error state (without causing an
       *  ios_base::failure to be thrown) and the original exception will
       *  be rethrown if badbit is set in the exceptions mask.
      */

      /**
       *  @brief  Simple extraction.
       *  @return  A character, or eof().
       *
       *  Tries to extract a character.  If none are available, sets failbit
       *  and returns traits::eof().
      */
      int_type
      get();

      /**
       *  @brief  Simple extraction.
       *  @param  __c  The character in which to store data.
       *  @return  *this
       *
       *  Tries to extract a character and store it in @a __c.  If none are
       *  available, sets failbit and returns traits::eof().
       *
       *  @note  This function is not overloaded on signed char and
       *         unsigned char.
      */
      __istream_type&
      get(char_type& __c);

      /**
       *  @brief  Simple multiple-character extraction.
       *  @param  __s  Pointer to an array.
       *  @param  __n  Maximum number of characters to store in @a __s.
       *  @param  __delim  A "stop" character.
       *  @return  *this
       *
       *  Characters are extracted and stored into @a __s until one of the
       *  following happens:
       *
       *  - @c __n-1 characters are stored
       *  - the input sequence reaches EOF
       *  - the next character equals @a __delim, in which case the character
       *    is not extracted
       *
       * If no characters are stored, failbit is set in the stream's error
       * state.
       *
       * In any case, a null character is stored into the next location in
       * the array.
       *
       *  @note  This function is not overloaded on signed char and
       *         unsigned char.
      */
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);

      /**
       *  @brief  Simple multiple-character extraction.
       *  @param  __s  Pointer to an array.
       *  @param  __n  Maximum number of characters to store in @a s.
       *  @return  *this
       *
       *  Returns @c get(__s,__n,widen(&apos;\\n&apos;)).
      */
      __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }

      /**
       *  @brief  Extraction into another streambuf.
       *  @param  __sb  A streambuf in which to store data.
       *  @param  __delim  A "stop" character.
       *  @return  *this
       *
       *  Characters are extracted and inserted into @a __sb until one of the
       *  following happens:
       *
       *  - the input sequence reaches EOF
       *  - insertion into the output buffer fails (in this case, the
       *    character that would have been inserted is not extracted)
       *  - the next character equals @a __delim (in this case, the character
       *    is not extracted)
       *  - an exception occurs (and in this case is caught)
       *
       * If no characters are stored, failbit is set in the stream's error
       * state.
      */
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);

      /**
       *  @brief  Extraction into another streambuf.
       *  @param  __sb  A streambuf in which to store data.
       *  @return  *this
       *
       *  Returns @c get(__sb,widen(&apos;\\n&apos;)).
      */
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }

      /**
       *  @brief  String extraction.
       *  @param  __s  A character array in which to store the data.
       *  @param  __n  Maximum number of characters to extract.
       *  @param  __delim  A "stop" character.
       *  @return  *this
       *
       *  Extracts and stores characters into @a __s until one of the
       *  following happens.  Note that these criteria are required to be
       *  tested in the order listed here, to allow an input line to exactly
       *  fill the @a __s array without setting failbit.
       *
       *  -# the input sequence reaches end-of-file, in which case eofbit
       *     is set in the stream error state
       *  -# the next character equals @c __delim, in which case the character
       *     is extracted (and therefore counted in @c gcount()) but not stored
       *  -# @c __n-1 characters are stored, in which case failbit is set
       *     in the stream error state
       *
       *  If no characters are extracted, failbit is set.  (An empty line of
       *  input should therefore not cause failbit to be set.)
       *
       *  In any case, a null character is stored in the next location in
       *  the array.
      */
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);

      /**
       *  @brief  String extraction.
       *  @param  __s  A character array in which to store the data.
       *  @param  __n  Maximum number of characters to extract.
       *  @return  *this
       *
       *  Returns @c getline(__s,__n,widen(&apos;\\n&apos;)).
      */
      __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }

      /**
       *  @brief  Discarding characters
       *  @param  __n  Number of characters to discard.
       *  @param  __delim  A "stop" character.
       *  @return  *this
       *
       *  Extracts characters and throws them away until one of the
       *  following happens:
       *  - if @a __n @c != @c std::numeric_limits<int>::max(), @a __n
       *    characters are extracted
       *  - the input sequence reaches end-of-file
       *  - the next character equals @a __delim (in this case, the character
       *    is extracted); note that this condition will never occur if
       *    @a __delim equals @c traits::eof().
       *
       *  NB: Provide three overloads, instead of the single function
       *  (with defaults) mandated by the Standard: this leads to a
       *  better performing implementation, while still conforming to
       *  the Standard.
      */
      __istream_type&
      ignore(streamsize __n, int_type __delim);

      __istream_type&
      ignore(streamsize __n);

      __istream_type&
      ignore();

      /**
       *  @brief  Looking ahead in the stream
       *  @return  The next character, or eof().
       *
       *  If, after constructing the sentry object, @c good() is false,
       *  returns @c traits::eof().  Otherwise reads but does not extract
       *  the next input character.
      */
      int_type
      peek();

      /**
       *  @brief  Extraction without delimiters.
       *  @param  __s  A character array.
       *  @param  __n  Maximum number of characters to store.
       *  @return  *this
       *
       *  If the stream state is @c good(), extracts characters and stores
       *  them into @a __s until one of the following happens:
       *  - @a __n characters are stored
       *  - the input sequence reaches end-of-file, in which case the error
       *    state is set to @c failbit|eofbit.
       *
       *  @note  This function is not overloaded on signed char and
       *         unsigned char.
      */
      __istream_type&
      read(char_type* __s, streamsize __n);

      /**
       *  @brief  Extraction until the buffer is exhausted, but no more.
       *  @param  __s  A character array.
       *  @param  __n  Maximum number of characters to store.
       *  @return  The number of characters extracted.
       *
       *  Extracts characters and stores them into @a __s depending on the
       *  number of characters remaining in the streambuf's buffer,
       *  @c rdbuf()->in_avail(), called @c A here:
       *  - if @c A @c == @c -1, sets eofbit and extracts no characters
       *  - if @c A @c == @c 0, extracts no characters
       *  - if @c A @c > @c 0, extracts @c min(A,n)
       *
       *  The goal is to empty the current buffer, and to not request any
       *  more from the external input sequence controlled by the streambuf.
      */
      streamsize
      readsome(char_type* __s, streamsize __n);

      /**
       *  @brief  Unextracting a single character.
       *  @param  __c  The character to push back into the input stream.
       *  @return  *this
       *
       *  If @c rdbuf() is not null, calls @c rdbuf()->sputbackc(c).
       *
       *  If @c rdbuf() is null or if @c sputbackc() fails, sets badbit in
       *  the error state.
       *
       *  @note  This function first clears eofbit.  Since no characters
       *         are extracted, the next call to @c gcount() will return 0,
       *         as required by DR 60.
      */
      __istream_type&
      putback(char_type __c);

      /**
       *  @brief  Unextracting the previous character.
       *  @return  *this
       *
       *  If @c rdbuf() is not null, calls @c rdbuf()->sungetc(c).
       *
       *  If @c rdbuf() is null or if @c sungetc() fails, sets badbit in
       *  the error state.
       *
       *  @note  This function first clears eofbit.  Since no characters
       *         are extracted, the next call to @c gcount() will return 0,
       *         as required by DR 60.
      */
      __istream_type&
      unget();

      /**
       *  @brief  Synchronizing the stream buffer.
       *  @return  0 on success, -1 on failure
       *
       *  If @c rdbuf() is a null pointer, returns -1.
       *
       *  Otherwise, calls @c rdbuf()->pubsync(), and if that returns -1,
       *  sets badbit and returns -1.
       *
       *  Otherwise, returns 0.
       *
       *  @note  This function does not count the number of characters
       *         extracted, if any, and therefore does not affect the next
       *         call to @c gcount().
      */
      int
      sync();

      /**
       *  @brief  Getting the current read position.
       *  @return  A file position object.
       *
       *  If @c fail() is not false, returns @c pos_type(-1) to indicate
       *  failure.  Otherwise returns @c rdbuf()->pubseekoff(0,cur,in).
       *
       *  @note  This function does not count the number of characters
       *         extracted, if any, and therefore does not affect the next
       *         call to @c gcount().  At variance with putback, unget and
       *         seekg, eofbit is not cleared first.
      */
      pos_type
      tellg();

      /**
       *  @brief  Changing the current read position.
       *  @param  __pos  A file position object.
       *  @return  *this
       *
       *  If @c fail() is not true, calls @c rdbuf()->pubseekpos(__pos).  If
       *  that function fails, sets failbit.
       *
       *  @note  This function first clears eofbit.  It does not count the
       *         number of characters extracted, if any, and therefore does
       *         not affect the next call to @c gcount().
      */
      __istream_type&
      seekg(pos_type);

      /**
       *  @brief  Changing the current read position.
       *  @param  __off  A file offset object.
       *  @param  __dir  The direction in which to seek.
       *  @return  *this
       *
       *  If @c fail() is not true, calls @c rdbuf()->pubseekoff(__off,__dir).
       *  If that function fails, sets failbit.
       *
       *  @note  This function first clears eofbit.  It does not count the
       *         number of characters extracted, if any, and therefore does
       *         not affect the next call to @c gcount().
      */
      __istream_type&
      seekg(off_type, ios_base::seekdir);
      //@}

    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }

#if __cplusplus >= 201103L
      basic_istream(const basic_istream&) = delete;

      basic_istream(basic_istream&& __rhs)
      : __ios_type(), _M_gcount(__rhs._M_gcount)
      {
	__ios_type::move(__rhs);
	__rhs._M_gcount = 0;
      }

      // 27.7.3.3 Assign/swap

      basic_istream& operator=(const basic_istream&) = delete;

      basic_istream&
      operator=(basic_istream&& __rhs)
      {
	swap(__rhs);
	return *this;
      }

      void
      swap(basic_istream& __rhs)
      {
	__ios_type::swap(__rhs);
	std::swap(_M_gcount, __rhs._M_gcount);
      }
#endif

      template<typename _ValueT>
	__istream_type&
	_M_extract(_ValueT& __v);
    };

  /// Explicit specialization declarations, defined in src/istream.cc.
  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);

#ifdef _GLIBCXX_USE_WCHAR_T
  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
#endif

  /**
   *  @brief  Performs setup work for input streams.
   *
   *  Objects of this class are created before all of the standard
   *  extractors are run.  It is responsible for <em>exception-safe
   *  prefix and suffix operations,</em> although only prefix actions
   *  are currently required by the standard.
  */
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {
      // Data Members.
      bool _M_ok;

    public:
      /// Easy access to dependent types.
      typedef _Traits 					traits_type;
      typedef basic_streambuf<_CharT, _Traits> 		__streambuf_type;
      typedef basic_istream<_CharT, _Traits> 		__istream_type;
      typedef typename __istream_type::__ctype_type 	__ctype_type;
      typedef typename _Traits::int_type		__int_type;

      /**
       *  @brief  The constructor performs all the work.
       *  @param  __is  The input stream to guard.
       *  @param  __noskipws  Whether to consume whitespace or not.
       *
       *  If the stream state is good (@a __is.good() is true), then the
       *  following actions are performed, otherwise the sentry state
       *  is false (<em>not okay</em>) and failbit is set in the
       *  stream state.
       *
       *  The sentry's preparatory actions are:
       *
       *  -# if the stream is tied to an output stream, @c is.tie()->flush()
       *     is called to synchronize the output sequence
       *  -# if @a __noskipws is false, and @c ios_base::skipws is set in
       *     @c is.flags(), the sentry extracts and discards whitespace
       *     characters from the stream.  The currently imbued locale is
       *     used to determine whether each character is whitespace.
       *
       *  If the stream state is still good, then the sentry state becomes
       *  true (@a okay).
      */
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);

      /**
       *  @brief  Quick status checking.
       *  @return  The sentry state.
       *
       *  For ease of use, sentries may be converted to booleans.  The
       *  return value is that of the sentry state (true == okay).
      */
#if __cplusplus >= 201103L
      explicit
#endif
      operator bool() const
      { return _M_ok; }
    };

  //@{
  /**
   *  @brief  Character extractors
   *  @param  __in  An input stream.
   *  @param  __c  A character reference.
   *  @return  in
   *
   *  Behaves like one of the formatted arithmetic extractors described in
   *  std::basic_istream.  After constructing a sentry object with good
   *  status, this function extracts a character (if one is available) and
   *  stores it in @a __c.  Otherwise, sets failbit in the input stream.
  */
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
  //@}

  //@{
  /**
   *  @brief  Character string extractors
   *  @param  __in  An input stream.
   *  @param  __s  A pointer to a character array.
   *  @return  __in
   *
   *  Behaves like one of the formatted arithmetic extractors described in
   *  std::basic_istream.  After constructing a sentry object with good
   *  status, this function extracts up to @c n characters and stores them
   *  into the array starting at @a __s.  @c n is defined as:
   *
   *  - if @c width() is greater than zero, @c n is width() otherwise
   *  - @c n is <em>the number of elements of the largest array of *
   *  - @c char_type that can store a terminating @c eos.</em>
   *  - [27.6.1.2.3]/6
   *
   *  Characters are extracted and stored until one of the following happens:
   *  - @c n-1 characters are stored
   *  - EOF is reached
   *  - the next character is whitespace according to the current locale
   *  - the next character is a null byte (i.e., @c charT() )
   *
   *  @c width(0) is then called for the input stream.
   *
   *  If no characters are extracted, sets failbit.
  */
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);

  // Explicit specialization declaration, defined in src/istream.cc.
  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
  //@}

  /**
   *  @brief  Template class basic_iostream
   *  @ingroup io
   *
   *  @tparam _CharT  Type of character stream.
   *  @tparam _Traits  Traits for character type, defaults to
   *                   char_traits<_CharT>.
   *
   *  This class multiply inherits from the input and output stream classes
   *  simply to provide a single interface.
  */
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 271. basic_iostream missing typedefs
      // Types (inherited):
      typedef _CharT			 		char_type;
      typedef typename _Traits::int_type 		int_type;
      typedef typename _Traits::pos_type 		pos_type;
      typedef typename _Traits::off_type 		off_type;
      typedef _Traits			 		traits_type;

      // Non-standard Types:
      typedef basic_istream<_CharT, _Traits>		__istream_type;
      typedef basic_ostream<_CharT, _Traits>		__ostream_type;

      /**
       *  @brief  Constructor does nothing.
       *
       *  Both of the parent classes are initialized with the same
       *  streambuf pointer passed to this constructor.
      */
      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }

      /**
       *  @brief  Destructor does nothing.
      */
      virtual
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }

#if __cplusplus >= 201103L
      basic_iostream(const basic_iostream&) = delete;

      basic_iostream(basic_iostream&& __rhs)
      : __istream_type(std::move(__rhs)), __ostream_type(*this)
      { }

      // 27.7.3.3 Assign/swap

      basic_iostream& operator=(const basic_iostream&) = delete;

      basic_iostream&
      operator=(basic_iostream&& __rhs)
      {
	swap(__rhs);
	return *this;
      }

      void
      swap(basic_iostream& __rhs)
      { __istream_type::swap(__rhs); }
#endif
    };

  /**
   *  @brief  Quick and easy way to eat whitespace
   *
   *  This manipulator extracts whitespace characters, stopping when the
   *  next character is non-whitespace, or when the input sequence is empty.
   *  If the sequence is empty, @c eofbit is set in the stream, but not
   *  @c failbit.
   *
   *  The current locale is used to distinguish whitespace characters.
   *
   *  Example:
   *  @code
   *     MyClass   mc;
   *
   *     std::cin >> std::ws >> mc;
   *  @endcode
   *  will skip leading whitespace before calling operator>> on cin and your
   *  object.  Note that the same effect can be achieved by creating a
   *  std::basic_istream::sentry inside your definition of operator>>.
  */
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);

#if __cplusplus >= 201103L
  template<typename _Ch, typename _Up>
    basic_istream<_Ch, _Up>&
    __is_convertible_to_basic_istream_test(basic_istream<_Ch, _Up>*);

  template<typename _Tp, typename = void>
    struct __is_convertible_to_basic_istream_impl
    {
      using __istream_type = void;
    };

  template<typename _Tp>
    using __do_is_convertible_to_basic_istream_impl =
    decltype(__is_convertible_to_basic_istream_test
	     (declval<typename remove_reference<_Tp>::type*>()));

  template<typename _Tp>
    struct __is_convertible_to_basic_istream_impl
    <_Tp,
     __void_t<__do_is_convertible_to_basic_istream_impl<_Tp>>>
    {
      using __istream_type =
	__do_is_convertible_to_basic_istream_impl<_Tp>;
    };

  template<typename _Tp>
    struct __is_convertible_to_basic_istream
    : __is_convertible_to_basic_istream_impl<_Tp>
    {
    public:
      using type = __not_<is_void<
        typename __is_convertible_to_basic_istream_impl<_Tp>::__istream_type>>;
      constexpr static bool value = type::value;
    };

  template<typename _Istream, typename _Tp, typename = void>
    struct __is_extractable : false_type {};

  template<typename _Istream, typename _Tp>
    struct __is_extractable<_Istream, _Tp,
			    __void_t<decltype(declval<_Istream&>()
					      >> declval<_Tp>())>>
    : true_type {};

  template<typename _Istream>
    using __rvalue_istream_type =
      typename __is_convertible_to_basic_istream<
	_Istream>::__istream_type;

  // [27.7.1.6] Rvalue stream extraction
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 2328. Rvalue stream extraction should use perfect forwarding
  /**
   *  @brief  Generic extractor for rvalue stream
   *  @param  __is  An input stream.
   *  @param  __x  A reference to the extraction target.
   *  @return  is
   *
   *  This is just a forwarding function to allow extraction from
   *  rvalue streams since they won't bind to the extractor functions
   *  that take an lvalue reference.
  */
  template<typename _Istream, typename _Tp>
    inline
    typename enable_if<__and_<__not_<is_lvalue_reference<_Istream>>,
			      __is_convertible_to_basic_istream<_Istream>,
			      __is_extractable<
				__rvalue_istream_type<_Istream>,
				_Tp&&>>::value,
		       __rvalue_istream_type<_Istream>>::type
    operator>>(_Istream&& __is, _Tp&& __x)
    {
      __rvalue_istream_type<_Istream> __ret_is = __is;
      __ret_is >> std::forward<_Tp>(__x);
      return __ret_is;
    }
#endif // C++11

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#include <bits/istream.tcc>

#endif	/* _GLIBCXX_ISTREAM */

//******* END OF ISTREAM **********

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /**
   *  @name Standard Stream Objects
   *
   *  The &lt;iostream&gt; header declares the eight <em>standard stream
   *  objects</em>.  For other declarations, see
   *  http://gcc.gnu.org/onlinedocs/libstdc++/manual/io.html
   *  and the @link iosfwd I/O forward declarations @endlink
   *
   *  They are required by default to cooperate with the global C
   *  library's @c FILE streams, and to be available during program
   *  startup and termination. For more information, see the section of the
   *  manual linked to above.
  */
  //@{
  extern istream cin;		/// Linked to standard input
  extern ostream cout;		/// Linked to standard output
  extern ostream cerr;		/// Linked to standard error (unbuffered)
  extern ostream clog;		/// Linked to standard error (buffered)

#ifdef _GLIBCXX_USE_WCHAR_T
  extern wistream wcin;		/// Linked to standard input
  extern wostream wcout;	/// Linked to standard output
  extern wostream wcerr;	/// Linked to standard error (unbuffered)
  extern wostream wclog;	/// Linked to standard error (buffered)
#endif
  //@}

  // For construction of filebuffers for cout, cin, cerr, clog et. al.
  static ios_base::Init __ioinit;

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#endif /* _GLIBCXX_IOSTREAM */
