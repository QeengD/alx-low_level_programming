#include "main.h"

/**
 * get_bit - Write function that returns value of bit at given index.
 * @k: number to search
 * @sado: index of the bit
 *
 * Return: value of bit at index index or -1 if an error occur
 */
int get_bit(unsigned long int k, unsigned int sado)
{
int bit_val;
if (sado > 63)
return (-1);
bit_val = (k >> sado) & 1;
return (bit_val);
}
