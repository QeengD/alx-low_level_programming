#include "main.h"

/**
 * get_endianness - Write function that checks endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int j = 1;
char *c = (char *) &j;
return (*c);
}
