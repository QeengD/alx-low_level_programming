#include "main.h"

/**
 * print_binary - Write a function that prints
 * binary representation of a number.
 * @k: number to print in binary
 */
void print_binary(unsigned long int k)
{
int j, count = 0;
unsigned long int current;
for (j = 63; j >= 0; j--)
{
current = k >> j;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
