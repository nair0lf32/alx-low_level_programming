#include "main.h"
/**
*read_textfile - Reads a text file and prints it to stdout
*@filename: pointer to the name of the file
*@letters: number of letters the function should read and print
*Return: 0 or actual number of bytes the function can read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t opn, rd, wr;
char *buffer;
if (filename == NULL)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer ==  NULL)
{
return (0);
}
opn = open(filename, O_RDONLY);
rd = read(o, buffer, letters);
wr = write(STDOUT_FILENO, buffer, rd);
if (opn == -1 || rd == -1 || wr == -1 || wr != r)
{
free(buffer);
return (0);
}
free(buffer);
close(opn);
return (wr);
}
