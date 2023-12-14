#include "shell.h"
#include <sys/wait.h>
#include <string.h>

/**
 * run_command - A function that executes a user's command.
 * @command: The command to run or execute.
 * pid_t: A standard library function that tracks process IDs.
 * fork: A standard library function that assigns a process ID
 * to a child process.
 * Return: 1 for errors and 0 to to ascertain success.
 */

void run_command(const char *command)
{
	pid_t child_pid;
	char *args[2];

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		args[0] = strdup(command);
		args[1] = NULL;

		execve(command, args, (char *const *)NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
