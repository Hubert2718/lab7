#ifndef SKOROWIDZ_H
#define SKOROWIDZ_H
#include <stdio.h>
#include <stdlib.h>
#include "strstr.h"

#define BUFSIZE 8192

int static num_of_columns = 10;
int static num_of_rows;

int **init_words_in_lines(int n);    

void words_in_lines(FILE *in, int num_words, int **lines, char **words);

#endif
