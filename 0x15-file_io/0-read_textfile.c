#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function to read text file & print to STDOUT.
 * @textname: text file being read
 * @symbols: number of letters to be read
 * Return: g- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *textname, size_t symbols)
{
char *buf;
ssize_t fd;
ssize_t g;
ssize_t t;
fd = open(textname, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * symbols);
t = read(fd, buf, symbols);
g = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (g);
}
