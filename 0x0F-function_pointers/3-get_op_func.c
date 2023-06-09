#include "3-calc.h"
#include <stdlib.h>

/**
* get_op_func - Selects the correct function to perform
*
* @s: op passed as function arguement.
*
* Return: A pointer to the function
*/

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (NULL);
}
