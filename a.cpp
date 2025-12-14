/usr/bin/g++ -std=gnu++20 -fdiagnostics-color=always -g /home/taku/projects/kyopro/library/kypro_tool/random_test/random_tester.cpp -o /home/taku/projects/kyopro/library/kypro_tool/random_test/random_tester -I /home/taku/lib/ac-library-master
In file included from /home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/data.hpp:5,
                 from /home/taku/projects/kyopro/library/kypro_tool/random_test/all.hpp:2,
                 from /home/taku/projects/kyopro/library/kypro_tool/random_test/random_tester.cpp:5:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp: In instantiation of ‘std::ostream& operator<<(std::ostream&, const std::vector<_Tp>&) [with T = std::tuple<int, int, int>; std::ostream = std::basic_ostream<char>]’:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:37:71:   required from ‘operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)> [with auto:56 = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}]’
/usr/include/c++/13/type_traits:2558:26:   required by substitution of ‘template<class _Fn, class ... _Args> static std::__result_of_success<decltype (declval<_Fn>()((declval<_Args>)()...)), std::__invoke_other> std::__result_of_other_impl::_S_test(int) [with _Fn = operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>; _Args = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}]’
/usr/include/c++/13/type_traits:2569:55:   required from ‘struct std::__result_of_impl<false, false, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/type_traits:2574:12:   required from ‘struct std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/type_traits:161:35:   [ skipping 2 instantiation contexts, use -ftemplate-backtrace-limit=0 to disable ]
/usr/include/c++/13/type_traits:177:42:   required from ‘struct std::__and_<std::__is_invocable_impl<std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>, void, true, void>, std::__call_is_nothrow<std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&> >’
/usr/include/c++/13/type_traits:3103:12:   required from ‘struct std::is_nothrow_invocable<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/tuple:2294:37:   required from ‘constexpr const bool std::__unpack_std_tuple<template<class _Fn, class ... _ArgTypes> struct std::is_nothrow_invocable, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&>’
/usr/include/c++/13/tuple:2309:14:   required from ‘constexpr decltype(auto) std::apply(_Fn&&, _Tuple&&) [with _Fn = operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>; _Tuple = const tuple<const int&, const int&, const int&, const vector<tuple<int, int, int>, allocator<tuple<int, int, int> > >&>&]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:37:8:   required from ‘std::ostream& operator<<(std::ostream&, const std::tuple<_UTypes ...>&) [with T = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}; std::ostream = std::basic_ostream<char>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:43:12:   required from ‘std::ostream& operator<<(std::ostream&, const T&) [with T = TestCase; std::ostream = std::basic_ostream<char>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/data.hpp:27:13:   required from here
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: error: no match for ‘operator<<’ (operand types are ‘std::ostream’ {aka ‘std::basic_ostream<char>’} and ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’})
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/c++/13/bits/unique_ptr.h:42,
                 from /usr/include/c++/13/memory:78,
                 from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:56,
                 from /home/taku/projects/kyopro/library/kypro_tool/random_test/random_tester.cpp:1:
/usr/include/c++/13/ostream:110:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(__ostream_type& (*)(__ostream_type&)) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  110 |       operator<<(__ostream_type& (*__pf)(__ostream_type&))
      |       ^~~~~~~~
/usr/include/c++/13/ostream:110:36: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘std::basic_ostream<char>::__ostream_type& (*)(std::basic_ostream<char>::__ostream_type&)’ {aka ‘std::basic_ostream<char>& (*)(std::basic_ostream<char>&)’}
  110 |       operator<<(__ostream_type& (*__pf)(__ostream_type&))
      |                  ~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/ostream:119:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(__ios_type& (*)(__ios_type&)) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>; __ios_type = std::basic_ios<char>]’
  119 |       operator<<(__ios_type& (*__pf)(__ios_type&))
      |       ^~~~~~~~
/usr/include/c++/13/ostream:119:32: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘std::basic_ostream<char>::__ios_type& (*)(std::basic_ostream<char>::__ios_type&)’ {aka ‘std::basic_ios<char>& (*)(std::basic_ios<char>&)’}
  119 |       operator<<(__ios_type& (*__pf)(__ios_type&))
      |                  ~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~
/usr/include/c++/13/ostream:129:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(std::ios_base& (*)(std::ios_base&)) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  129 |       operator<<(ios_base& (*__pf) (ios_base&))
      |       ^~~~~~~~
/usr/include/c++/13/ostream:129:30: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘std::ios_base& (*)(std::ios_base&)’
  129 |       operator<<(ios_base& (*__pf) (ios_base&))
      |                  ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~
/usr/include/c++/13/ostream:168:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(long int) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  168 |       operator<<(long __n)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:168:23: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘long int’
  168 |       operator<<(long __n)
      |                  ~~~~~^~~
/usr/include/c++/13/ostream:172:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(long unsigned int) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  172 |       operator<<(unsigned long __n)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:172:32: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘long unsigned int’
  172 |       operator<<(unsigned long __n)
      |                  ~~~~~~~~~~~~~~^~~
/usr/include/c++/13/ostream:176:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(bool) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  176 |       operator<<(bool __n)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:176:23: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘bool’
  176 |       operator<<(bool __n)
      |                  ~~~~~^~~
In file included from /usr/include/c++/13/ostream:880:
/usr/include/c++/13/bits/ostream.tcc:96:5: note: candidate: ‘std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, _Traits>::operator<<(short int) [with _CharT = char; _Traits = std::char_traits<char>]’
   96 |     basic_ostream<_CharT, _Traits>::
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/ostream.tcc:97:22: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘short int’
   97 |     operator<<(short __n)
      |                ~~~~~~^~~
/usr/include/c++/13/ostream:183:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(short unsigned int) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  183 |       operator<<(unsigned short __n)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:183:33: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘short unsigned int’
  183 |       operator<<(unsigned short __n)
      |                  ~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/bits/ostream.tcc:110:5: note: candidate: ‘std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, _Traits>::operator<<(int) [with _CharT = char; _Traits = std::char_traits<char>]’
  110 |     basic_ostream<_CharT, _Traits>::
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/ostream.tcc:111:20: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘int’
  111 |     operator<<(int __n)
      |                ~~~~^~~
/usr/include/c++/13/ostream:194:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(unsigned int) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  194 |       operator<<(unsigned int __n)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:194:31: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘unsigned int’
  194 |       operator<<(unsigned int __n)
      |                  ~~~~~~~~~~~~~^~~
/usr/include/c++/13/ostream:203:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(long long int) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  203 |       operator<<(long long __n)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:203:28: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘long long int’
  203 |       operator<<(long long __n)
      |                  ~~~~~~~~~~^~~
/usr/include/c++/13/ostream:207:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(long long unsigned int) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  207 |       operator<<(unsigned long long __n)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:207:37: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘long long unsigned int’
  207 |       operator<<(unsigned long long __n)
      |                  ~~~~~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/ostream:222:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(double) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  222 |       operator<<(double __f)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:222:25: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘double’
  222 |       operator<<(double __f)
      |                  ~~~~~~~^~~
/usr/include/c++/13/ostream:226:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(float) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  226 |       operator<<(float __f)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:226:24: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘float’
  226 |       operator<<(float __f)
      |                  ~~~~~~^~~
/usr/include/c++/13/ostream:234:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(long double) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  234 |       operator<<(long double __f)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:234:30: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘long double’
  234 |       operator<<(long double __f)
      |                  ~~~~~~~~~~~~^~~
/usr/include/c++/13/ostream:292:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(const void*) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>]’
  292 |       operator<<(const void* __p)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:292:30: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘const void*’
  292 |       operator<<(const void* __p)
      |                  ~~~~~~~~~~~~^~~
/usr/include/c++/13/ostream:297:7: note: candidate: ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(std::nullptr_t) [with _CharT = char; _Traits = std::char_traits<char>; __ostream_type = std::basic_ostream<char>; std::nullptr_t = std::nullptr_t]’
  297 |       operator<<(nullptr_t)
      |       ^~~~~~~~
/usr/include/c++/13/ostream:297:18: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘std::nullptr_t’
  297 |       operator<<(nullptr_t)
      |                  ^~~~~~~~~
/usr/include/c++/13/bits/ostream.tcc:124:5: note: candidate: ‘std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, _Traits>::operator<<(__streambuf_type*) [with _CharT = char; _Traits = std::char_traits<char>; __streambuf_type = std::basic_streambuf<char>]’
  124 |     basic_ostream<_CharT, _Traits>::
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/ostream.tcc:125:34: note:   no known conversion for argument 1 from ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} to ‘std::basic_ostream<char>::__streambuf_type*’ {aka ‘std::basic_streambuf<char>*’}
  125 |     operator<<(__streambuf_type* __sbin)
      |                ~~~~~~~~~~~~~~~~~~^~~~~~
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:5:39: note: candidate: ‘template<class T1, class T2> std::ostream& operator<<(std::ostream&, const std::pair<_T1, _T2>&)’
    5 | template<class T1, class T2> ostream& operator << (ostream &s, const pair<T1,T2>& P)
      |                                       ^~~~~~~~
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:5:39: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::pair<_T1, _T2>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:8:28: note: candidate: ‘template<class T> std::ostream& operator<<(std::ostream&, const std::vector<_Tp>&)’
    8 | template<class T> ostream& operator << (ostream &s, const vector<T>& P)
      |                            ^~~~~~~~
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:8:28: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::vector<_Tp>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/c++/13/regex:68,
                 from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:181:
/usr/include/c++/13/bits/regex.h:1715:5: note: candidate: ‘template<class _Ch_type, class _Ch_traits, class _Bi_iter> std::basic_ostream<_CharT, _Traits>& std::__cxx11::operator<<(std::basic_ostream<_CharT, _Traits>&, const sub_match<_Bi_iter>&)’
 1715 |     operator<<(basic_ostream<_Ch_type, _Ch_traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/regex.h:1715:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::__cxx11::sub_match<_Bi_iter>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:41:
/usr/include/c++/13/cstddef:124:5: note: candidate: ‘template<class _IntegerType> constexpr std::__byte_op_t<_IntegerType> std::operator<<(byte, _IntegerType)’
  124 |     operator<<(byte __b, _IntegerType __shift) noexcept
      |     ^~~~~~~~
/usr/include/c++/13/cstddef:124:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘s’ (type ‘std::ostream’ {aka ‘std::basic_ostream<char>’}) to type ‘std::byte’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/c++/13/bits/basic_string.h:47,
                 from /usr/include/c++/13/string:54,
                 from /usr/include/c++/13/bitset:52,
                 from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:52:
/usr/include/c++/13/string_view:761:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, basic_string_view<_CharT, _Traits>)’
  761 |     operator<<(basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/string_view:761:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘std::tuple<int, int, int>’ is not derived from ‘std::basic_string_view<_CharT, _Traits>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/basic_string.h:4032:5: note: candidate: ‘template<class _CharT, class _Traits, class _Alloc> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const __cxx11::basic_string<_CharT, _Traits, _Allocator>&)’
 4032 |     operator<<(basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/basic_string.h:4032:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::__cxx11::basic_string<_CharT, _Traits, _Allocator>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bitset:1683:5: note: candidate: ‘template<class _CharT, class _Traits, long unsigned int _Nb> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const bitset<_Nb>&)’
 1683 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bitset:1683:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::bitset<_Nb>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/c++/13/bits/ios_base.h:46,
                 from /usr/include/c++/13/streambuf:43,
                 from /usr/include/c++/13/bits/streambuf_iterator.h:35,
                 from /usr/include/c++/13/iterator:66,
                 from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:54:
/usr/include/c++/13/system_error:339:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const error_code&)’
  339 |     operator<<(basic_ostream<_CharT, _Traits>& __os, const error_code& __e)
      |     ^~~~~~~~
/usr/include/c++/13/system_error:339:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘const std::error_code&’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:554:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, _CharT)’
  554 |     operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
      |     ^~~~~~~~
/usr/include/c++/13/ostream:554:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   deduced conflicting types for parameter ‘_CharT’ (‘char’ and ‘std::tuple<int, int, int>’)
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:564:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, char)’
  564 |     operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
      |     ^~~~~~~~
/usr/include/c++/13/ostream:564:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘char’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:570:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, char)’
  570 |     operator<<(basic_ostream<char, _Traits>& __out, char __c)
      |     ^~~~~~~~
/usr/include/c++/13/ostream:570:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘char’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:581:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, signed char)’
  581 |     operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
      |     ^~~~~~~~
/usr/include/c++/13/ostream:581:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘signed char’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:586:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, unsigned char)’
  586 |     operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
      |     ^~~~~~~~
/usr/include/c++/13/ostream:586:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘unsigned char’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:595:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, wchar_t)’ (deleted)
  595 |     operator<<(basic_ostream<char, _Traits>&, wchar_t) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:595:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘wchar_t’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:600:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, char8_t)’ (deleted)
  600 |     operator<<(basic_ostream<char, _Traits>&, char8_t) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:600:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘char8_t’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:605:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, char16_t)’ (deleted)
  605 |     operator<<(basic_ostream<char, _Traits>&, char16_t) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:605:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘char16_t’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:609:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, char32_t)’ (deleted)
  609 |     operator<<(basic_ostream<char, _Traits>&, char32_t) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:609:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘char32_t’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:615:5: note: candidate: ‘template<class _Traits> std::basic_ostream<wchar_t, _Traits>& std::operator<<(basic_ostream<wchar_t, _Traits>&, char8_t)’ (deleted)
  615 |     operator<<(basic_ostream<wchar_t, _Traits>&, char8_t) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:615:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   mismatched types ‘wchar_t’ and ‘char’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:620:5: note: candidate: ‘template<class _Traits> std::basic_ostream<wchar_t, _Traits>& std::operator<<(basic_ostream<wchar_t, _Traits>&, char16_t)’ (deleted)
  620 |     operator<<(basic_ostream<wchar_t, _Traits>&, char16_t) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:620:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   mismatched types ‘wchar_t’ and ‘char’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:624:5: note: candidate: ‘template<class _Traits> std::basic_ostream<wchar_t, _Traits>& std::operator<<(basic_ostream<wchar_t, _Traits>&, char32_t)’ (deleted)
  624 |     operator<<(basic_ostream<wchar_t, _Traits>&, char32_t) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:624:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   mismatched types ‘wchar_t’ and ‘char’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:645:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const _CharT*)’
  645 |     operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
      |     ^~~~~~~~
/usr/include/c++/13/ostream:645:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   mismatched types ‘const _CharT*’ and ‘std::tuple<int, int, int>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/ostream.tcc:307:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const char*)’
  307 |     operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
      |     ^~~~~~~~
/usr/include/c++/13/bits/ostream.tcc:307:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘const char*’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:662:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, const char*)’
  662 |     operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
      |     ^~~~~~~~
/usr/include/c++/13/ostream:662:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘const char*’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:675:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, const signed char*)’
  675 |     operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
      |     ^~~~~~~~
/usr/include/c++/13/ostream:675:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘const signed char*’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:680:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, const unsigned char*)’
  680 |     operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
      |     ^~~~~~~~
/usr/include/c++/13/ostream:680:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘const unsigned char*’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:689:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, const wchar_t*)’ (deleted)
  689 |     operator<<(basic_ostream<char, _Traits>&, const wchar_t*) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:689:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘const wchar_t*’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:694:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, const char8_t*)’ (deleted)
  694 |     operator<<(basic_ostream<char, _Traits>&, const char8_t*) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:694:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘const char8_t*’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:699:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, const char16_t*)’ (deleted)
  699 |     operator<<(basic_ostream<char, _Traits>&, const char16_t*) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:699:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘const char16_t*’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:703:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(basic_ostream<char, _Traits>&, const char32_t*)’ (deleted)
  703 |     operator<<(basic_ostream<char, _Traits>&, const char32_t*) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:703:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘const char32_t*’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:709:5: note: candidate: ‘template<class _Traits> std::basic_ostream<wchar_t, _Traits>& std::operator<<(basic_ostream<wchar_t, _Traits>&, const char8_t*)’ (deleted)
  709 |     operator<<(basic_ostream<wchar_t, _Traits>&, const char8_t*) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:709:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   mismatched types ‘wchar_t’ and ‘char’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:714:5: note: candidate: ‘template<class _Traits> std::basic_ostream<wchar_t, _Traits>& std::operator<<(basic_ostream<wchar_t, _Traits>&, const char16_t*)’ (deleted)
  714 |     operator<<(basic_ostream<wchar_t, _Traits>&, const char16_t*) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:714:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   mismatched types ‘wchar_t’ and ‘char’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:718:5: note: candidate: ‘template<class _Traits> std::basic_ostream<wchar_t, _Traits>& std::operator<<(basic_ostream<wchar_t, _Traits>&, const char32_t*)’ (deleted)
  718 |     operator<<(basic_ostream<wchar_t, _Traits>&, const char32_t*) = delete;
      |     ^~~~~~~~
/usr/include/c++/13/ostream:718:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   mismatched types ‘wchar_t’ and ‘char’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/ostream:801:5: note: candidate: ‘template<class _Ostream, class _Tp> _Ostream&& std::operator<<(_Ostream&&, const _Tp&)’
  801 |     operator<<(_Ostream&& __os, const _Tp& __x)
      |     ^~~~~~~~
/usr/include/c++/13/ostream:801:5: note:   template argument deduction/substitution failed:
/usr/include/c++/13/ostream: In substitution of ‘template<class _Ostream, class _Tp> _Ostream&& std::operator<<(_Ostream&&, const _Tp&) [with _Ostream = std::basic_ostream<char>&; _Tp = std::tuple<int, int, int>]’:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78:   required from ‘std::ostream& operator<<(std::ostream&, const std::vector<_Tp>&) [with T = std::tuple<int, int, int>; std::ostream = std::basic_ostream<char>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:37:71:   required from ‘operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)> [with auto:56 = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}]’
/usr/include/c++/13/type_traits:2558:26:   required by substitution of ‘template<class _Fn, class ... _Args> static std::__result_of_success<decltype (declval<_Fn>()((declval<_Args>)()...)), std::__invoke_other> std::__result_of_other_impl::_S_test(int) [with _Fn = operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>; _Args = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}]’
/usr/include/c++/13/type_traits:2569:55:   required from ‘struct std::__result_of_impl<false, false, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/type_traits:2574:12:   required from ‘struct std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/type_traits:161:35:   [ skipping 2 instantiation contexts, use -ftemplate-backtrace-limit=0 to disable ]
/usr/include/c++/13/type_traits:177:42:   required from ‘struct std::__and_<std::__is_invocable_impl<std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>, void, true, void>, std::__call_is_nothrow<std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&> >’
/usr/include/c++/13/type_traits:3103:12:   required from ‘struct std::is_nothrow_invocable<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/tuple:2294:37:   required from ‘constexpr const bool std::__unpack_std_tuple<template<class _Fn, class ... _ArgTypes> struct std::is_nothrow_invocable, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&>’
/usr/include/c++/13/tuple:2309:14:   required from ‘constexpr decltype(auto) std::apply(_Fn&&, _Tuple&&) [with _Fn = operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>; _Tuple = const tuple<const int&, const int&, const int&, const vector<tuple<int, int, int>, allocator<tuple<int, int, int> > >&>&]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:37:8:   required from ‘std::ostream& operator<<(std::ostream&, const std::tuple<_UTypes ...>&) [with T = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}; std::ostream = std::basic_ostream<char>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:43:12:   required from ‘std::ostream& operator<<(std::ostream&, const T&) [with T = TestCase; std::ostream = std::basic_ostream<char>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/data.hpp:27:13:   required from here
/usr/include/c++/13/ostream:801:5: error: template constraint failure for ‘template<class _Os, class _Tp>  requires (__derived_from_ios_base<_Os>) && requires(_Os& __os, const _Tp& __t) {__os << __t;} using std::__rvalue_stream_insertion_t = _Os&&’
/usr/include/c++/13/ostream:801:5: note: constraints not satisfied
/usr/include/c++/13/ostream: In substitution of ‘template<class _Os, class _Tp>  requires (__derived_from_ios_base<_Os>) && requires(_Os& __os, const _Tp& __t) {__os << __t;} using std::__rvalue_stream_insertion_t = _Os&& [with _Os = std::basic_ostream<char>&; _Tp = std::tuple<int, int, int>]’:
/usr/include/c++/13/ostream:801:5:   required by substitution of ‘template<class _Ostream, class _Tp> _Ostream&& std::operator<<(_Ostream&&, const _Tp&) [with _Ostream = std::basic_ostream<char>&; _Tp = std::tuple<int, int, int>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78:   required from ‘std::ostream& operator<<(std::ostream&, const std::vector<_Tp>&) [with T = std::tuple<int, int, int>; std::ostream = std::basic_ostream<char>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:37:71:   required from ‘operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)> [with auto:56 = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}]’
/usr/include/c++/13/type_traits:2558:26:   required by substitution of ‘template<class _Fn, class ... _Args> static std::__result_of_success<decltype (declval<_Fn>()((declval<_Args>)()...)), std::__invoke_other> std::__result_of_other_impl::_S_test(int) [with _Fn = operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>; _Args = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}]’
/usr/include/c++/13/type_traits:2569:55:   required from ‘struct std::__result_of_impl<false, false, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/type_traits:2574:12:   [ skipping 3 instantiation contexts, use -ftemplate-backtrace-limit=0 to disable ]
/usr/include/c++/13/type_traits:177:42:   required from ‘struct std::__and_<std::__is_invocable_impl<std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>, void, true, void>, std::__call_is_nothrow<std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&> >’
/usr/include/c++/13/type_traits:3103:12:   required from ‘struct std::is_nothrow_invocable<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/tuple:2294:37:   required from ‘constexpr const bool std::__unpack_std_tuple<template<class _Fn, class ... _ArgTypes> struct std::is_nothrow_invocable, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&>’
/usr/include/c++/13/tuple:2309:14:   required from ‘constexpr decltype(auto) std::apply(_Fn&&, _Tuple&&) [with _Fn = operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>; _Tuple = const tuple<const int&, const int&, const int&, const vector<tuple<int, int, int>, allocator<tuple<int, int, int> > >&>&]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:37:8:   required from ‘std::ostream& operator<<(std::ostream&, const std::tuple<_UTypes ...>&) [with T = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}; std::ostream = std::basic_ostream<char>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:43:12:   required from ‘std::ostream& operator<<(std::ostream&, const T&) [with T = TestCase; std::ostream = std::basic_ostream<char>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/data.hpp:27:13:   required from here
/usr/include/c++/13/ostream:768:13:   required for the satisfaction of ‘__derived_from_ios_base<_Os>’ [with _Os = std::basic_ostream<char, std::char_traits<char> >&]
/usr/include/c++/13/ostream:768:39: note: the expression ‘is_class_v<_Tp> [with _Tp = std::basic_ostream<char, std::char_traits<char> >&]’ evaluated to ‘false’
  768 |     concept __derived_from_ios_base = is_class_v<_Tp>
      |                                       ^~~~~~~~~~~~~~~
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp: In instantiation of ‘std::ostream& operator<<(std::ostream&, const std::vector<_Tp>&) [with T = std::tuple<int, int, int>; std::ostream = std::basic_ostream<char>]’:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:37:71:   required from ‘operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)> [with auto:56 = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}]’
/usr/include/c++/13/type_traits:2558:26:   required by substitution of ‘template<class _Fn, class ... _Args> static std::__result_of_success<decltype (declval<_Fn>()((declval<_Args>)()...)), std::__invoke_other> std::__result_of_other_impl::_S_test(int) [with _Fn = operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>; _Args = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}]’
/usr/include/c++/13/type_traits:2569:55:   required from ‘struct std::__result_of_impl<false, false, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/type_traits:2574:12:   required from ‘struct std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/type_traits:161:35:   [ skipping 2 instantiation contexts, use -ftemplate-backtrace-limit=0 to disable ]
/usr/include/c++/13/type_traits:177:42:   required from ‘struct std::__and_<std::__is_invocable_impl<std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>, void, true, void>, std::__call_is_nothrow<std::__invoke_result<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&> >’
/usr/include/c++/13/type_traits:3103:12:   required from ‘struct std::is_nothrow_invocable<operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>’
/usr/include/c++/13/tuple:2294:37:   required from ‘constexpr const bool std::__unpack_std_tuple<template<class _Fn, class ... _ArgTypes> struct std::is_nothrow_invocable, operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&>’
/usr/include/c++/13/tuple:2309:14:   required from ‘constexpr decltype(auto) std::apply(_Fn&&, _Tuple&&) [with _Fn = operator<< <const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>(std::ostream&, const std::tuple<const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&>&)::<lambda(auto:56&& ...)>; _Tuple = const tuple<const int&, const int&, const int&, const vector<tuple<int, int, int>, allocator<tuple<int, int, int> > >&>&]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:37:8:   required from ‘std::ostream& operator<<(std::ostream&, const std::tuple<_UTypes ...>&) [with T = {const int&, const int&, const int&, const std::vector<std::tuple<int, int, int>, std::allocator<std::tuple<int, int, int> > >&}; std::ostream = std::basic_ostream<char>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:43:12:   required from ‘std::ostream& operator<<(std::ostream&, const T&) [with T = TestCase; std::ostream = std::basic_ostream<char>]’
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/data.hpp:27:13:   required from here
/usr/include/c++/13/bits/unique_ptr.h:1142:5: note: candidate: ‘template<class _CharT, class _Traits, class _Tp, class _Dp> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const unique_ptr<_Up, _Ep>&) requires requires{std::operator<<::__os << std::operator<<::__p->get();}’
 1142 |     operator<<(basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/unique_ptr.h:1142:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::unique_ptr<_Up, _Ep>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/c++/13/memory:80:
/usr/include/c++/13/bits/shared_ptr.h:70:5: note: candidate: ‘template<class _Ch, class _Tr, class _Tp, __gnu_cxx::_Lock_policy _Lp> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const __shared_ptr<_Tp, _Lp>&)’
   70 |     operator<<(std::basic_ostream<_Ch, _Tr>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/shared_ptr.h:70:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::__shared_ptr<_Tp, _Lp>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/c++/13/ccomplex:39,
                 from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:127:
/usr/include/c++/13/complex:558:5: note: candidate: ‘template<class _Tp, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const complex<_Tp>&)’
  558 |     operator<<(basic_ostream<_CharT, _Traits>& __os, const complex<_Tp>& __x)
      |     ^~~~~~~~
/usr/include/c++/13/complex:558:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::complex<_Tp>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:143:
/usr/include/c++/13/iomanip:81:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, _Resetiosflags)’
   81 |     operator<<(basic_ostream<_CharT, _Traits>& __os, _Resetiosflags __f)
      |     ^~~~~~~~
/usr/include/c++/13/iomanip:81:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘std::_Resetiosflags’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/iomanip:111:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, _Setiosflags)’
  111 |     operator<<(basic_ostream<_CharT, _Traits>& __os, _Setiosflags __f)
      |     ^~~~~~~~
/usr/include/c++/13/iomanip:111:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘std::_Setiosflags’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/iomanip:145:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, _Setbase)’
  145 |     operator<<(basic_ostream<_CharT, _Traits>& __os, _Setbase __f)
      |     ^~~~~~~~
/usr/include/c++/13/iomanip:145:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘std::_Setbase’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/iomanip:180:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, _Setfill<_CharT>)’
  180 |     operator<<(basic_ostream<_CharT, _Traits>& __os, _Setfill<_CharT> __f)
      |     ^~~~~~~~
/usr/include/c++/13/iomanip:180:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘std::tuple<int, int, int>’ is not derived from ‘std::_Setfill<_CharT>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/iomanip:210:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, _Setprecision)’
  210 |     operator<<(basic_ostream<_CharT, _Traits>& __os, _Setprecision __f)
      |     ^~~~~~~~
/usr/include/c++/13/iomanip:210:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘std::_Setprecision’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/iomanip:240:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, _Setw)’
  240 |     operator<<(basic_ostream<_CharT, _Traits>& __os, _Setw __f)
      |     ^~~~~~~~
/usr/include/c++/13/iomanip:240:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘std::_Setw’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/iomanip:313:5: note: candidate: ‘template<class _CharT, class _Traits, class _MoneyT> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, _Put_money<_MoneyT>)’
  313 |     operator<<(basic_ostream<_CharT, _Traits>& __os, _Put_money<_MoneyT> __f)
      |     ^~~~~~~~
/usr/include/c++/13/iomanip:313:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘std::tuple<int, int, int>’ is not derived from ‘std::_Put_money<_MoneyT>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/iomanip:365:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, _Put_time<_CharT>)’
  365 |     operator<<(basic_ostream<_CharT, _Traits>& __os, _Put_time<_CharT> __f)
      |     ^~~~~~~~
/usr/include/c++/13/iomanip:365:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘std::tuple<int, int, int>’ is not derived from ‘std::_Put_time<_CharT>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/c++/13/valarray:605,
                 from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:166:
/usr/include/c++/13/bits/valarray_after.h:413:5: note: candidate: ‘template<class _Dom1, class _Dom2> std::_Expr<std::__detail::_BinClos<std::__shift_left, std::_Expr, std::_Expr, _Dom1, _Dom2>, typename std::__fun<std::__shift_left, typename _Dom1::value_type>::result_type> std::operator<<(const _Expr<_Dom1, typename _Dom1::value_type>&, const _Expr<_Dom2, typename _Dom2::value_type>&)’
  413 |     _DEFINE_EXPR_BINARY_OPERATOR(<<, struct std::__shift_left)
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/valarray_after.h:413:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘const std::_Expr<_Dom1, typename _Dom1::value_type>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/valarray_after.h:413:5: note: candidate: ‘template<class _Dom> std::_Expr<std::__detail::_BinClos<std::__shift_left, std::_Expr, std::_Constant, _Dom, typename _Dom::value_type>, typename std::__fun<std::__shift_left, typename _Dom1::value_type>::result_type> std::operator<<(const _Expr<_Dom1, typename _Dom1::value_type>&, const typename _Dom::value_type&)’
  413 |     _DEFINE_EXPR_BINARY_OPERATOR(<<, struct std::__shift_left)
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/valarray_after.h:413:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘const std::_Expr<_Dom1, typename _Dom1::value_type>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/valarray_after.h:413:5: note: candidate: ‘template<class _Dom> std::_Expr<std::__detail::_BinClos<std::__shift_left, std::_Constant, std::_Expr, typename _Dom::value_type, _Dom>, typename std::__fun<std::__shift_left, typename _Dom1::value_type>::result_type> std::operator<<(const typename _Dom::value_type&, const _Expr<_Dom1, typename _Dom1::value_type>&)’
  413 |     _DEFINE_EXPR_BINARY_OPERATOR(<<, struct std::__shift_left)
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/valarray_after.h:413:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::_Expr<_Dom1, typename _Dom1::value_type>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/valarray_after.h:413:5: note: candidate: ‘template<class _Dom> std::_Expr<std::__detail::_BinClos<std::__shift_left, std::_Expr, std::_ValArray, _Dom, typename _Dom::value_type>, typename std::__fun<std::__shift_left, typename _Dom1::value_type>::result_type> std::operator<<(const _Expr<_Dom1, typename _Dom1::value_type>&, const valarray<typename _Dom::value_type>&)’
  413 |     _DEFINE_EXPR_BINARY_OPERATOR(<<, struct std::__shift_left)
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/valarray_after.h:413:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘const std::_Expr<_Dom1, typename _Dom1::value_type>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/valarray_after.h:413:5: note: candidate: ‘template<class _Dom> std::_Expr<std::__detail::_BinClos<std::__shift_left, std::_ValArray, std::_Expr, typename _Dom::value_type, _Dom>, typename std::__fun<std::__shift_left, typename _Dom1::value_type>::result_type> std::operator<<(const valarray<typename _Dom::value_type>&, const _Expr<_Dom1, typename _Dom1::value_type>&)’
  413 |     _DEFINE_EXPR_BINARY_OPERATOR(<<, struct std::__shift_left)
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/valarray_after.h:413:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::_Expr<_Dom1, typename _Dom1::value_type>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/valarray:1204:1: note: candidate: ‘template<class _Tp> std::_Expr<std::__detail::_BinClos<std::__shift_left, std::_ValArray, std::_ValArray, _Tp, _Tp>, typename std::__fun<std::__shift_left, _Tp>::result_type> std::operator<<(const valarray<_Tp>&, const valarray<_Tp>&)’
 1204 | _DEFINE_BINARY_OPERATOR(<<, __shift_left)
      | ^~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/valarray:1204:1: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘const std::valarray<_Tp>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/valarray:1204:1: note: candidate: ‘template<class _Tp> std::_Expr<std::__detail::_BinClos<std::__shift_left, std::_ValArray, std::_Constant, _Tp, _Tp>, typename std::__fun<std::__shift_left, _Tp>::result_type> std::operator<<(const valarray<_Tp>&, const typename valarray<_Tp>::value_type&)’
 1204 | _DEFINE_BINARY_OPERATOR(<<, __shift_left)
      | ^~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/valarray:1204:1: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘const std::valarray<_Tp>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/valarray:1204:1: note: candidate: ‘template<class _Tp> std::_Expr<std::__detail::_BinClos<std::__shift_left, std::_Constant, std::_ValArray, _Tp, _Tp>, typename std::__fun<std::__shift_left, _Tp>::result_type> std::operator<<(const typename valarray<_Tp>::value_type&, const valarray<_Tp>&)’
 1204 | _DEFINE_BINARY_OPERATOR(<<, __shift_left)
      | ^~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/valarray:1204:1: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::valarray<_Tp>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/c++/13/random:51,
                 from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:179:
/usr/include/c++/13/bits/random.h:1341:5: note: candidate: ‘template<class _RandomNumberEngine, long unsigned int __w, class _UIntType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const independent_bits_engine<_RandomNumberEngine, __w, _UIntType>&)’
 1341 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.h:1341:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::independent_bits_engine<_RandomNumberEngine, __w, _UIntType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/c++/13/random:53:
/usr/include/c++/13/bits/random.tcc:910:5: note: candidate: ‘template<class _IntType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const uniform_int_distribution<_IntType>&)’
  910 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:910:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::uniform_int_distribution<_IntType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:968:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const uniform_real_distribution<_RealType>&)’
  968 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:968:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::uniform_real_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:2145:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const cauchy_distribution<_RealType>&)’
 2145 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:2145:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::cauchy_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:1029:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const bernoulli_distribution&)’
 1029 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:1029:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘const std::bernoulli_distribution&’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:1110:5: note: candidate: ‘template<class _IntType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const geometric_distribution<_IntType>&)’
 1110 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:1110:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::geometric_distribution<_IntType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:1762:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const exponential_distribution<_RealType>&)’
 1762 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:1762:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::exponential_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:2539:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const weibull_distribution<_RealType>&)’
 2539 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:2539:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::weibull_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:2613:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const extreme_value_distribution<_RealType>&)’
 2613 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:2613:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::extreme_value_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:156:5: note: candidate: ‘template<class _UIntType, _UIntType __a, _UIntType __c, _UIntType __m, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const linear_congruential_engine<_UIntType, __a, __c, __m>&)’
  156 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:156:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::linear_congruential_engine<_UIntType, __a, __c, __m>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:477:5: note: candidate: ‘template<class _UIntType1, long unsigned int __w1, long unsigned int __n1, long unsigned int __m1, long unsigned int __r1, _UIntType1 __a1, long unsigned int __u1, _UIntType1 __d1, long unsigned int __s1, _UIntType1 __b1, long unsigned int __t1, _UIntType1 __c1, long unsigned int __l1, _UIntType1 __f1, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const mersenne_twister_engine<_UIntType1, __w1, __n1, __m1, __r1, __a1, __u1, __d1, __s1, __b1, __t1, __c1, __l1, __f1>&)’
  477 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:477:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::mersenne_twister_engine<_UIntType1, __w1, __n1, __m1, __r1, __a1, __u1, __d1, __s1, __b1, __t1, __c1, __l1, __f1>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:635:5: note: candidate: ‘template<class _UIntType, long unsigned int __w, long unsigned int __s, long unsigned int __r, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const subtract_with_carry_engine<_UIntType, __w, __s, __r>&)’
  635 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:635:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::subtract_with_carry_engine<_UIntType, __w, __s, __r>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:704:5: note: candidate: ‘template<class _RandomNumberEngine, long unsigned int __p, long unsigned int __r, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const discard_block_engine<_RandomNumberEngine, __p, __r>&)’
  704 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:704:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::discard_block_engine<_RandomNumberEngine, __p, __r>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:866:5: note: candidate: ‘template<class _RandomNumberEngine, long unsigned int __k, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const shuffle_order_engine<_RandomNumberEngine, __k>&)’
  866 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:866:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::shuffle_order_engine<_RandomNumberEngine, __k>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:1224:5: note: candidate: ‘template<class _IntType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const negative_binomial_distribution<_IntType>&)’
 1224 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:1224:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::negative_binomial_distribution<_IntType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:1434:5: note: candidate: ‘template<class _IntType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const poisson_distribution<_IntType>&)’
 1434 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:1434:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::poisson_distribution<_IntType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:1700:5: note: candidate: ‘template<class _IntType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const binomial_distribution<_IntType>&)’
 1700 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:1700:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::binomial_distribution<_IntType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:1920:5: note: candidate: ‘template<class _RealType1, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const normal_distribution<_RealType>&)’
 1920 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:1920:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::normal_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:1987:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const lognormal_distribution<_RealType>&)’
 1987 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:1987:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::lognormal_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:2059:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const chi_squared_distribution<_RealType>&)’
 2059 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:2059:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::chi_squared_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:2220:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const fisher_f_distribution<_RealType>&)’
 2220 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:2220:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::fisher_f_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:2294:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const student_t_distribution<_RealType>&)’
 2294 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:2294:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::student_t_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:2463:5: note: candidate: ‘template<class _RealType1, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const gamma_distribution<_RealType>&)’
 2463 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:2463:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::gamma_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:2749:5: note: candidate: ‘template<class _IntType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const discrete_distribution<_IntType>&)’
 2749 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:2749:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::discrete_distribution<_IntType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:2971:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const piecewise_constant_distribution<_RealType>&)’
 2971 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:2971:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::piecewise_constant_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
/usr/include/c++/13/bits/random.tcc:3177:5: note: candidate: ‘template<class _RealType, class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, const piecewise_linear_distribution<_RealType>&)’
 3177 |     operator<<(std::basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/13/bits/random.tcc:3177:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’} is not derived from ‘const std::piecewise_linear_distribution<_RealType>’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
      |                                                                            ~~^~~~~
In file included from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:184:
/usr/include/c++/13/thread:97:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, thread::id)’
   97 |     operator<<(basic_ostream<_CharT, _Traits>& __out, thread::id __id)
      |     ^~~~~~~~
/usr/include/c++/13/thread:97:5: note:   template argument deduction/substitution failed:
/home/taku/projects/kyopro/library/kypro_tool/random_test/function_file/debug_print.hpp:9:78: note:   cannot convert ‘(& P)->std::vector<std::tuple<int, int, int> >::operator[](((std::vector<std::tuple<int, int, int> >::size_type)i))’ (type ‘const __gnu_cxx::__alloc_traits<std::allocator<std::tuple<int, int, int> >, std::tuple<int, int, int> >::value_type’ {aka ‘const std::tuple<int, int, int>’}) to type ‘std::thread::id’
    9 | { s << "\n"; for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }