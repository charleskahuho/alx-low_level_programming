#include"3-calc.h"
#include<stdlib.h>
/**
 * get_op_func - function
 * @s: pointer
 *
 *
 * Return: defined
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
    int i;

    i = 0;

    while (ops[i].op != NULL)
    {
	    if (*s == *ops[i].op)
	    {
		    return (i);
	    }
	    i++;
    }
	    return (NULL);
}

