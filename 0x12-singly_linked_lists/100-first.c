#include <stdio.h>
/**
 * start - prints before main is executed
 */
void start(void) __atttribute__((constructor));
void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
