#ifndef _UTIL
#define _UTIL

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check_args(int argc, char **argv);
FILE *open_file(char *filename, char *mode);
void *malloc_ck(int size);
int file_num_of_line_completed(char *filename, char *mode);
void scanfile(int argc, char **argv, int n);

extern void *util_malloc(unsigned int size);
extern void *util_calloc(unsigned int num, unsigned int size);
extern char *util_strdup(char *src);
extern void arr_disp(void **ptr, unsigned int n, void (*quit)(void *));
extern void **mat_alloc(unsigned int n, unsigned int m, unsigned int size);
extern void mat_disp(void ***ptr, unsigned int n, unsigned int m,
                     void (*quit)(void *));

#endif
