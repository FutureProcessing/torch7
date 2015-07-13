#ifndef TH_ALLOCATOR_INC
#define TH_ALLOCATOR_INC

#include "THGeneral.h"

/* Custom allocator
 */
typedef struct THAllocator {
  void* (*malloc)(void*, size_t);
  void* (*realloc)(void*, void*, size_t);
  void (*free)(void*, void*);
} THAllocator;

/* default malloc/free allocator. malloc and realloc raise an error (using
 * THError) on allocation failure.
 */
extern THAllocator THDefaultAllocator;

/* file map allocator
 */
typedef struct THMapAllocatorContext_  THMapAllocatorContext;
THMapAllocatorContext *THMapAllocatorContext_new(const char *filename, int shared);
size_t THMapAllocatorContext_size(THMapAllocatorContext *ctx);
void THMapAllocatorContext_free(THMapAllocatorContext *ctx);

extern THAllocator THMapAllocator;

#endif
