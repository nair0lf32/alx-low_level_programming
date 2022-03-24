#ifndef MAIN_H
#define MAIN_H
/**
*File:main.h
*Desc:header file with function prototypes
*/
char _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void rev_string(char *s);
int _strlen(char *s);
void swap_char(char *a, char *b);
void print_buffer(char *b, int size);

#endif /* MAIN_H */