#include "main.h"
/**
*create_file - creates a file
*@filename: pointer to the name of the file
*@text_content: null terminated string to write to the file
*Return: 1 or -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd;
int wr;
if (!filename)
{
return (-1);
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
wr = write(fd, text_content, _strlen(text_content));
if (wr == -1)
{
return (-1);
}
close(fd);
return (1);
}
/**
*_strlen - returns the length of a string
*@s: string to be measured
*Return: length of string
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
}
return (i);
}
 