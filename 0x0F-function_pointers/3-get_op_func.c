#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - This function selects the 
 * right operator/operator function to be used
 *
 * @s -Operator to be passed by our user
 * @int - operand 1
 * @int - operand 2
 *
 * Return: int, which is a pointer to the
 * appropriate function.
 */
int (*get_op_func(char *S))(int, int)
{
	if (s
}