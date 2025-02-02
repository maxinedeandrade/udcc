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

#include <udcc/Basic/Allocator.h>

#include <udcc/Basic/Platform.h>

void *Allocate(Allocator *allocator, size_t size)
{
  return allocator->allocate(allocator->userData, size);
}

void *Reallocate(Allocator *allocator, void *p, size_t size)
{
  return allocator->reallocate(allocator->userData, p, size);
}

void Free(Allocator *allocator, void *p)
{
  allocator->free(allocator->userData, p);
}