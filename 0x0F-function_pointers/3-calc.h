#ifndef CALC_H
#define CALC_H

#include <string.h>
#include <stdlib.h>

/**
 * struct op - struct for op
 *
 * @op: Operator for use.
 * @f: Function related to operator
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
