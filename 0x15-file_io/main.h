#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
