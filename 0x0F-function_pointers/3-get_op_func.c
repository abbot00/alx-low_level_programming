#include "3-calc.h"

/**
 * get_op_func -  the function that selects the correct function
 * to perform the operation asked by the user.
 * @s: An input char pointer operator passed as argument
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (*ops[i].op == *s && s[1] == '\0') /* Check if the operator matches */
return (ops[i].f);
i++;
}
return (NULL); /* If no matching operator is found */
}
