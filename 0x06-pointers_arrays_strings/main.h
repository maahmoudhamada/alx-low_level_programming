#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define max(a, b)(((a) > (b)) ? (a) : (b))


char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *str);
char *leet(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif
