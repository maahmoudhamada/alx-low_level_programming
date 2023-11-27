#include "main.h"

/**
* _strlen - Function that gets string length
*
* @s: String to get its length
*
* Return: Length of a string (Integer)
*/

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
return (i);
}

/**
* create_file - Function that create file and write within
*
* @filename: Name of the created file
* @text_content: Content to write within
*
* Return: One (1) on success Zero (0) otherwise
*/

int create_file(const char *filename, char *text_content)
{
int fd, fw, len;

len = fd = fw = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";

len = _strlen(text_content);

fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
if (fd == -1)
return (-1);
fw = write(fd, text_content, len);
if (fw == -1)
return (-1);
return (1);
}

