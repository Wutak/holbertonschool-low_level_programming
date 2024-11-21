#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_funct - function
 * @s: string
 * Return: NULL, s
 */
int (*get_op_funct(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op != '\0')
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}
	return (NULL);
}
