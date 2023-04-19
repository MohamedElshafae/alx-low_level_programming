#include <stdlib.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - summition
 * @a:first integer
 * @b:secound integer
 * Return: sum of of two
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sup - sub
 * @a:first integer
 * @b:secound integer
 * Return: sub of of two
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multi
* @a:first integer
* @b:secound integer
* Return: mul of of two
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_add - div
* @a:first integer
* @b:secound integer
* Return: div of of two
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_add - mod
* @a:first integer
* @b:secound integer
* Return: mod of of two
*/
int op_mod(int a, int b)
{
	return (a % b);
}
