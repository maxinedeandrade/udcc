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

#ifndef _UDCC_BASIC_ALLOCATOR_H
#define _UDCC_BASIC_ALLOCATOR_H

#include <stddef.h>

typedef void *(*AllocateFn)(void *userData, size_t size);
typedef void *(*ReallocateFn)(void *userData, void *p, size_t size);
typedef void (*FreeFn)(void *userData, void *p);

typedef struct Allocator
{
  void *userData;
  AllocateFn allocate;
  ReallocateFn reallocate;
  FreeFn free;
} Allocator;

void *Allocate(Allocator *allocator, size_t size);
void *Reallocate(Allocator *allocator, void *p, size_t size);
void Free(Allocator *allocator, void *p);

#endif // _UDCC_BASIC_ALLOCATOR_H