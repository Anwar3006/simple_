#include "main.h"

/**
  * _print_env - Prints the environment built-in
  *
  * Return: Nothing to returns
  */
void _print_env(void)
{
	int i = 0, j = 0;

	while (environ[i])
	{
		j = 0;
		while (environ[i][j])
		{
			_putchar(environ[i][j]);
			j++;
		}

		if (j != 0)
			_putchar('\n');
		i++;
	}
}

/**
  * remove_new_line - Removes a new line character from string
  * @str: The string
  *
  * Return: The string without a new line character
  */
char *remove_new_line(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == '\n')
			str[i] = '\0';
		i++;
	}

	return (str);
}

/**
  * signal_handler - Handles the signals
  * @sig_id: The identifier of the signal to handle
  *
  * Return: Nothing to returns
  */
void signal_handler(int sig_id)
{
	if (sig_id == SIGINT)
		write(STDOUT_FILENO, "\n(--@--) ", 9);
}
