#include <stdio.h>
/**
 * before_main - print before main
 */
void before_main(void) __attribute((constructor));
void before_main(void)
{
	printf(
"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
