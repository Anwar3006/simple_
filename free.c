#include "main.h"

/**
  *frees_get_env - frees environment variables
  *@env_path: The environment variable to frees
  *Return: Nothing to returns
  */
void frees_get_env(char *env_path)
{
	int i;

	for (i = 4; i >= 0; i--)
		env_path--;

	free(env_path);
}

/**
  *frees_tokens - frees tokens
  *@tokns: ...
  *Return: Nothing to returns
  */
void free_tokens(char **tokns)
{
	char **temp = tokns;

	if (tokns)
	{
		while (*tokns)
			free(*tokns++);

		free(temp);
	}
}

/**
  *_atoi - Convert a string to an integer.
  *@s: The pointer to convert
  *Return: A integer
  */
int _atoi(char *s)
{
	int min = 1, isi = 0, pos = 0;
	unsigned int ni = 0;

	while (s[pos])
	{
		if (s[pos] == '-')
			min *= -1;

		while (s[pos] >= '0' && s[pos] <= '9')
		{
			isi = 1;
			ni = (ni * 10) + (s[pos] - '0');
			pos++;
		}

		if (isi == 1)
			break;

		pos++;
	}

	ni *= min;
	return (ni);
}

/**
 *strPrint - Prints a string character by character.
 *@str: String to be printed. If the string is NULL it will print (null)
 *@new_line: If integer is 0 a new line will be printed. Otherwise a new line
 *will not be printed.
 */
void strPrint(char *str, int new_line)
{
	int i;

	if (str == NULL)
	{
		str = "(NULL)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		write(STDOUT_FILENO, &str[i], 1);
	}
	if (new_line == 0)
	{
		write(STDOUT_FILENO, "\n", 1);
	}  
}
