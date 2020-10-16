# More Malloc and Free

Exit status
The C library function void exit(int status) terminates the calling process immediately.
Any open file descriptors beloning to the process are closed and any children of the process are inherited by process 1, init, and the process parent is sent a SIGCHLD signal.

calloc
void *calloc(size_t nelem, size_t elsize); returns a pointer to the allocated space. calloc() allocates unused space for an array of nelem elements each of whos size in bytes is elsize. The space shall be initialized to all bits 0.

realloc
void *realloc(void *prt, size_t size); changes the size of hte memory block pointed to by ptr to 
size bytes. The contents will be unchanged in teh range from the start of the region up to 
the minimum of the old and new sizes. If the new size is larger than the old size, 
the added memory will not be initalized. If ptr is NULL then the call is equivalent
to malloc(size), for all values of size; if size is equal to zero, and ptr is not NULL
then the call is equivalent to free(ptr). Unless ptr is NULL, it mus thave been returned by an earlier call to malloc(), calloc() or realloc(). If the area pointed to was moved, a free(ptr) is done.
