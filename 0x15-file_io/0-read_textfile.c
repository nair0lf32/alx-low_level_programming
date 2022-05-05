#include "main.h"
/**
*read_textfile - Reads a text file and prints it to stdout
*@filename: pointer to the name of the file
*@letters: number of letters the function should read and print
*Return: 0 or actual number of bytes the function can read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int i, j;
char *buffer;
if (!filename)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
return (0);
}
i = read(fd, buf, letters);
if (i < 0)
{
free(buffer);
return (0);
}
buffer[i] = '\0';
close(fd);
j = write(STDOUT_FILENO, buf, i);
if (j < 0)
{
free(buffer);
return (0);
}
free(buffer);
return (j);
}
