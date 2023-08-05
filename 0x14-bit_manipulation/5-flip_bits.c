#include "main.h"

/**
 * flip_bits - Write function that returns number of bits you would need
 * to flip to get from one number to another.
 * @k: first number
 * @l: second number
 *
 * Return: no. of bits to change
 */
unsigned int flip_bits(unsigned long int k, unsigned long int l)
{
int j, count = 0;
unsigned long int current;
unsigned long int exclusive = k ^ l;
for (j = 63; j >= 0; j--)
{
current = exclusive >> j;
if (current & 1)
count++;
}
return (count);
}
