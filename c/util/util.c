#include "util.h"
#include <stdio.h>

#define C 100 + 1
#define ARGS 2

/*ARGS has to be modified in order to be used properly*/
void check_args(int argc, char **argv) { assert(argc == ARGS); }

FILE *open_file(char *filename, char *mode) {
  FILE *f = fopen(filename, mode);
  assert(f != NULL);
  return f;
}

void *malloc_ck(int size) {
  void *ptr = malloc(size);
  assert(ptr != NULL);
  return ptr;
}

int file_num_of_line_completed(char *filename, char *mode) {
  char *line;
  FILE *f;
  int n = 0;

  line = malloc_ck(C * sizeof(char));
  f = open_file(filename, mode);
  while (fgets(line, C, f) != NULL) {
    n++;
  }
  fclose(f);
  free(line);
  return n;
}

/*It has to be modified in order to be used properly*/
void scanfile(int argc, char **argv, int n) {
  int a = 0;
  FILE *f = open_file(argv[1], "r");
  for (int i = 0; i < n; i++) {
    fscanf(f, "%d ", &a);
    printf("%d ", a);
  }
  fclose(f);
}

/*malloc (with check) utility function*/
void *util_malloc(unsigned int size) {
  void *ptr = malloc(size);
  assert(ptr != NULL);
  return ptr;
}

/*calloc (with check) utility function*/
void *util_calloc(unsigned int num, unsigned int size) {
  void *ptr = calloc(num, size);
  assert(ptr != NULL);
  return ptr;
}

/*strdup (with check) utility function*/
char *util_strdup(char *src) {
  char *dst = strdup(src);
  assert(dst != NULL);
  return dst;
}

/*array de-allocation utility function*/
void util_array_dispose(void **ptr, unsigned int n, void (*quit)(void *)) {
  int i;

  if (quit != NULL) {
    for (i = 0; i < n; i++) {
      quit(ptr[i]);
    }
  }
  free(ptr);
}

/*matrix allocation utility function*/
void **util_matrix_alloc(unsigned int n, unsigned int m, unsigned int size) {
  void **ptr;
  int i;

  ptr = (void **)util_malloc(n * sizeof(void *));
  for (i = 0; i < n; i++) {
    ptr[i] = util_calloc(m, size);
  }
  return ptr;
}

/*matrix de-allocation utility function*/
void util_matrix_dispose(void ***ptr, unsigned int n, unsigned int m,
                         void (*quit)(void *)) {
  int i, j;

  for (i = 0; i < n; i++) {
    if (quit != NULL) {
      for (j = 0; j < m; j++) {
        quit(ptr[i][j]);
      }
    }
    free(ptr[i]);
  }
  free(ptr);
}
