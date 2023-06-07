#include "lists.h"
#include <stdio.h>

/**
 * startup - Use constructor on startup()
 * before executing it on main()
 */
void startup(void) __attribute__ ((constructor));

void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
