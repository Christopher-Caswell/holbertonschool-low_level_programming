#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
