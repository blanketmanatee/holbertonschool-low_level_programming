# Malloc and free
## The malloc() function allocates size bytes and returns a pointer to the allocated memory.
The memory is not initialized. void *malloc(size_t size);

Example

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n;
char *ar;

n = 5;
ar = malloc(n * sizeof(char));
ar[0] = 'C';
ar[1] = 'o';
ar[2] = 'o';
ar[3] = 'l';
ar[4] = '\0';
printf("%s\n", ar);
return (0);
}

## Free
When the allocated memory is not needed anymore, you must return it to the operating system 
by calling the function free.

void free(void *ar);

The free() function frees teh memory space pointed to by the pointer which must have been returned by a previous call to malloc(), calloc(), or realloc().

