#ifndef MAIN_H
#define MAIN_H
/**
 *File:main.h
 *Desc:header file with function prototypes
 */
char _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int count(char *str);

#endif /* MAIN_H */