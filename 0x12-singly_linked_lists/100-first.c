#include "lists.h"

/**
 *startup_function - executes before the main function
 */
void startup_function(void) __attribute__((constructor));
void startup_function(void)
{
	printf("You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n");
}
