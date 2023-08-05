#include "main.h"

/**
 * clear_bit - Write function that sets value of bit to 0 at given index.
 * @k: pointer to number to change
 * @sado: index of bit to clear
 *
 * Return: 1 if it worked, or -1 if error occurr
 */
int clear_bit(unsigned long int *k, unsigned int sado)
{
if (sado > 63)
return (-1);
*k = (~(1UL << sado) & *k);
return (1);
}
