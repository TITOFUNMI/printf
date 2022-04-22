#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
int print_num(long int n);
int print_binary(unsigned int num);
int print_unknown_specifier(char c);
int print_percentage();
int print_odh(char c, unsigned int num);
int dec_to_oct(unsigned int num);
int dec_to_hex(char c, unsigned int num);
int print_reverse(char *s);
int print_rot13(char *c);
#endif
