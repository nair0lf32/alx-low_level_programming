#include "main.h"
/**
*read_textfile - Reads a text file and prints it to stdout
*@filename: pointer to the name of the file
*@letters: number of letters the function should read and print
*Return: 0 or actual number of bytes the function can read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t op, wr, rd;
char *buffer;
if (!filename)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
return (0);
}
op = open(filename, O_RDONLY);
rd = read(op, buffer, letters);
wr = write(STDOUT_FILENO, buffer, rd);
free(buffer);
if (op == -1 || rd == -1 || wr == -1 || wr != rd)
{
return (0);
}
close(op);
return (wr);
}
