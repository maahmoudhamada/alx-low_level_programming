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
* append_text_to_file - Function that append string to existing file
*
* @filename: File name
* @text_content: Content to append
*
* Return: One (1) on success -1 otherwise
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, fw, len;

fd = fw = len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);

if (text_content == NULL)
return (1);

len = _strlen(text_content);
fw = write(fd, text_content, len);
if (fw == -1)
return (-1);
close(fd);
return (1);
}
