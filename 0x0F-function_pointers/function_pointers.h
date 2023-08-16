#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
#include <stdio.h>

int _putchar(char c);
int my_main(int argc, char *argv[]);
int main(void);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif/*MAIN_H*/
