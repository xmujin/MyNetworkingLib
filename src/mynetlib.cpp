#include "../include/mynetlib.h"
#include <cstring>

void bzero(void *pointer, size_t n)
{
    memset(pointer, 0, n);
}

