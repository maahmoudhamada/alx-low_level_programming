#include <stdio.h>

void __attribute__((constructor)) pre_execute(void);
/**
* pre_execute - Function that prints before main execute
*
* Return: Void
*/
void pre_execute(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

