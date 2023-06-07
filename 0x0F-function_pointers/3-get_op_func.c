#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - This function selects the
 * correct operator/operator function to be used
 *
 * @s: Operator to be passed by our user
 * @int - operand 1
 * @int - operand 2
 *
 * Return: int, which is a pointer to the
 * appropriate function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
