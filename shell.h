#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void show_prompt(void);
void shell_printf(const char *user_input);
void run_command(const char *command);
void read_input(char *command, size_t size);


#endif /* SHELL_H */
