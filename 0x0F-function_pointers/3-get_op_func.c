#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects correct function to perform
 *               the operatiion the user asks
 * @s: The operator passed as argument.
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int n = 0;

	while (ops[n].op != NULL && *(ops[n].op) != *s)
		n++;

	return (ops[n].f);
}
