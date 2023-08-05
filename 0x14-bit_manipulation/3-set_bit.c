#include "main.h"

/**
 * set_bit - Write function that sets value of bit to 1 at given index.
 * @k: pointer to the number to change
 * @sado: index of the bit to set to 1
 *
 * Return: 1 if it worked, or -1 if error occurred
 */
int set_bit(unsigned long int *k, unsigned int sado)
{
if (sado > 63)
return (-1);
*k = ((1UL << sado) | *k);
return (1);
}
