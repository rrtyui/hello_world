#ifndef CALC_H
#define CALC_H

/*
 * file: 3-calc.h
 * desc: Header file containing all structures
 */

/**
 * struct op - A struct op.
 * @op: the operator.
 * @f: the funct.
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
