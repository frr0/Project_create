#ifndef _UTIL
#define _UTIL

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void check_args(int argc, char **argv);
FILE *open_file(char *filename, char *mode);
void *malloc_ck(int size);
int file_num_of_line_completed(char *filename, char *mode);
FILE *scanfile(char *filename, char *mode);
int **scanfile_mat(char *filename, char *mode);
char **scanfile_mt(char *filename, char *mode);
void scanfile1(int argc, char **argv);

extern void *util_malloc(unsigned int size);
extern void *util_calloc(unsigned int num, unsigned int size);
extern char *util_strdup(char *src);
extern void arr_disp(void **ptr, unsigned int n, void (*quit)(void *));
extern void **mat_alloc(unsigned int n, unsigned int m, unsigned int size);
extern void mat_disp(void ***ptr, unsigned int n, unsigned int m,
                     void (*quit)(void *));

#endif
