//
// udcc - Uncommon Devices C Compiler
//
// Written in 2025 by maxinedeandrade <deandrade@posteo.com>
//
// To the extent possible under law, the author(s) have
// dedicated all copyright and related and neighboring rights
// to this software to the public domain worldwide. This
// software is distributed without any warranty.
//
// You should have received a copy of the CC0 Public Domain
// Dedication along with this software. If not,
// see <http://creativecommons.org/publicdomain/zero/1.0/>.
//

#ifndef _UDCC_BASIC_PLATFORM_H
#define _UDCC_BASIC_PLATFORM_H

#if defined(_WIN32) || defined(WIN32)
#define UDCC_PLATFORM_WINDOWS
#elif defined(linux)
#error Not yet supported
#else
#define UDCC_PLATFORM_UNKNOWN
#endif

#endif // _UDCC_BASIC_PLATFORM_H