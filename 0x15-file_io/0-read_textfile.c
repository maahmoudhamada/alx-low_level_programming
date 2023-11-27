#include "main.h"
/**
* _allocate - Function to allocate memory area
*
* @sz: Size of memory
*
* Return: Pointer to the reserved memory
*/

char *_allocate(size_t sz)
{
char *tmp;

tmp = malloc((sz + 1) * sizeof(char));
if (tmp == NULL)
return (NULL);

return (tmp);
}
/**
* read_textfile - Function to read specific given letters in a file
*
* @filename: File name to be readed
* @letters: Letters to be printed
*
* Return: Number of letters printed & readed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nb_read, nb_write;
char *buf;

if (filename == NULL)
return (0);

buf = _allocate(letters);

fd = open(filename, O_RDWR);
nb_read = read(fd, buf, letters);
if (fd == -1 || nb_read == -1)
return (0);

buf[nb_read] = '\0';

nb_write = write(STDOUT_FILENO, buf, nb_read);
if (nb_write == -1 || nb_write != nb_read)
return (0);
close(fd);
free(buf);
return (nb_write);
}

