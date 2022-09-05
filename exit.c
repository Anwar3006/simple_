#include "shell.h"

/**
  * _handle_exit - ...
  * @u_tokns: ...
  * @line: ...
  *
  * Return: Nothing to returns
  */
void _handle_exit(char **u_tokns, char *line)
{
	int status = 0;

	if (u_tokns[1] == NULL || (!_strcmp(u_tokns[1], "0")))
	{
		double_free(u_tokns);
		free(line);
		exit(0);
	}
	status = _atoi(u_tokns[1]);
	if (status != 0)
	{
		double_free(u_tokns);
		free(line);
		exit(status);
	}
	else
	{
		_puts("exit: Illegal number: ");
		_puts(u_tokns[1]);
		_puts("\n");
		exit(2);
	}

	double_free(u_tokns);
	free(line);
	exit(EXIT_SUCCESS);
}
