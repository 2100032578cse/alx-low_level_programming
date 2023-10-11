#include "3-calc.h"
/**
 * op_add - add b to a
 * @a: first operand
 * @b: second operand
 * Return: the result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract b from a
 * @a: first operand
 * @b: second operand
 * Return: the result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a and b
 * @a: first operand
 * @b: second operand
 * Return: the result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a and b
 * @a: first operand
 * @b: second operand
 * Return: the result of the operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns modulo of a and b
 * @a: first operand
 * @b: second operand
 * Return: the result of the operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
