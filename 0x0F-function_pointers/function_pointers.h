#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER "function_pointer.h"
void print_name(char *name, void (*f)(char *));
/*void array_iterator(int *array, size_t size, void (*action)(int));*/
int int_index(int *array, int size, int (*cmp)(int));
#include<stdio.h>
#include<stdlib.h>

#endif
