#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS "variadic_functions.h"
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct pter
{
	char *test;
	void (*printer)();
} prt;
void inprint(va_list args);
void chprint(va_list args);
void flprint(va_list args);
void stprint(va_list args);

#endif
	

