#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(int s);
int get_bit(unsigned long int n, unsigned int index);

#endif
