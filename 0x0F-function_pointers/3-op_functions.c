#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 *
 * @a: num1
 * @b: num2
 *
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 *
 * @a: num1
 * @b: num2
 *
 * Return: returns the difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 *
 * @a: num1
 * @b: num2
 *
 * Return: returns the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two numbers
 *
 * @a: num1
 * @b: num2
 *
 * Return: returns the quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the modulus of two numbers
 *
 * @a: num1
 * @b: num2
 *
 * Return: returns the modulus of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
