#ifndef MAIN_H
#define MAIN_H
unsigned long int _power(unsigned int base, unsigned int pow);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned int binary_to_uint(const char *b);
int get_endianness(void);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
void print_binary(unsigned long int n);
int clear_bit(unsigned long int *n, unsigned int index);
int _putchar(char c);

#endif
