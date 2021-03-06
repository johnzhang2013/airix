#ifndef STRING_H
#define STRING_H

#include <kernel/base_types.h>

/* Copy n bytes from memory area src to memory area dst.
 * Defined in memory.s */
void * memcpy(void *restrict dst, const void *restrict src, size_t n);

/* Write len bytes of value c to the string b.
 * Defined in memory.s */
void * memset(void *b, int c, size_t len);

#endif // STRING_H
