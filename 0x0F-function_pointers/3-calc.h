#ifndef _3_CALC_H
<<<<<<< HEAD
#defing _3_CALC_H
=======
#define _3_CALC_H
>>>>>>> 8bd2dfdc1b0faec3af592954ee281ae6e39f32df
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
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
<<<<<<< HEAD
=======
int (*get_op_func(char *s))(int, int);
>>>>>>> 8bd2dfdc1b0faec3af592954ee281ae6e39f32df
#endif

