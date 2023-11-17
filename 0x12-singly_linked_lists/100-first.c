#include <stdio.h>

void pre_exe(void) __attribute__((constructor));

/**
* pre_exe - Function to exectue before main function
*
* Return: void
*/

void pre_exe(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

