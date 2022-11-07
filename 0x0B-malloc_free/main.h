#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>
int _putchar(char c);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
#endif
