#ifndef MAIN_H
#define MAIN_H
/**
 * file name: main.h
 * description: header file containing all the prototypes of the functions
 */

int _putchar(char c);
char *_strcat(char *dest, char *src,);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);

#endif