#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - This file should contain the function that
 *  selects the correct function to perform the operation 
 *  asked by the user
 *  @s: pointer
 *	Return: pointer
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