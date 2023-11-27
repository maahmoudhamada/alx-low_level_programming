#include "main.h"

/**
* error_handle - print error message and exit
*
* @str: err message as string
* @file: file name as string
* @code: exit code
*
* Return: void
*/
void error_handle(char *str, char *file, int code)
{
dprintf(STDERR_FILENO, str, file);
exit(code);
}

/**
* cpy_files - copy source file to destination file
*
* @file_from: source file
* @file_to: destination file
*
* Return: void
*/
void cpy_files(char *file_from, char *file_to)
{
int fdd, fds, readn, writen;
char buffer[1024];

fdd = open(file_from, O_RDONLY);
if (fdd == -1)
error_handle("Error: Can't read from file %s\n", file_from, 98);

fds = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fds == -1)
error_handle("Error: Can't write to %s\n", file_to, 99);

readn = 1024;
while (readn == 1024)
{
readn = read(fdd, buffer, 1024);
if (readn == -1)
error_handle("Error: Can't read from file %s\n", file_from, 98);

writen = write(fds, buffer, readn);

if (writen == -1)
error_handle("Error: Can't write to %s\n", file_to, 99);
}

if (readn == -1)
error_handle("Error: Can't read from file %s\n", file_from, 98);
if (close(fds) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds);
exit(100);
}
if (close(fdd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds);
exit(100);
}
}
/**
* main - copies a file to another file
*
* @argc: Number of Arguments
* @argv: Arguments
*
* Return: 0 on success 1 otherwise
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

cpy_files(argv[1], argv[2]);

return (0);
}
