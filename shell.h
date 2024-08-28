#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

char **split_line(char *line);
void execute(char **args);
char *find_command(char *command);

#endif /* SHELL_H */
