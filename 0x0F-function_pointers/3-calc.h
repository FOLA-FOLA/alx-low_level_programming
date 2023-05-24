#ifndef CALC_H
#define CALC_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mult(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_up_func(char *s))(int, int);

#endif
