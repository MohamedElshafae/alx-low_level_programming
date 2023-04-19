#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * @name: string paramiter
 * @f:pointer to function
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
