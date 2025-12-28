#ifndef MEMORY_H
#define MEMORY_H

#include <stddef.h>

void safeMalloc(void** ptr, size_t size);
void safeRealloc(void** ptr, size_t size);
void dynamicGrowth(void** ptr, size_t* cap);
void free_array(void **array, size_t count); // free's array in which all the elements were memory allocated

#endif // MEMORY_H