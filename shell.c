#include "shell.h"

/**
 * main - Entry point of the shell program.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	char command[200];

	while (1)
	{
		show_prompt();
		read_input(command, sizeof(command));
		run_command(command);
	}

	return (0);
}
