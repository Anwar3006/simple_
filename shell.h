#ifndef _SHELL_
#define _SHELL_

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>

typedef struct Building
{
    char *name;
	int (*f)(char **argv, char **front);
} Built_cmp_t;

extern char **environ;

/* Built-in Functions */
void (*Build_cmp(char *))(char *);
void Zhell_exit(char **u_tokns, char *line);
void Zhell_cd(char *);
void Zhell_env(char *);
void Zhell_help();
int Built_in(char **, char *);

char *_strcat(char *dest, char *src);
int _strlen(const char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t len);
char *_strdup(char *str);
void strPrint(char *str, int new_line);
int count_token(char *line, const char *delim);
char **token_interface(char *line, char *delim, int token_count);
char *_strdup(char *str);
int _atoi(char *s);
int _putchar(char c);
void _puts(char *str);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int count_input(char *str);
int count_delims(char *str, char *del);
char *remove_new_line(char *str);
void signal_handler(int sig_id);
void _open_help(void);
void _print_env(void);
void _handle_exit(char **u_tokns, char *line);
int execBuiltInCommands(char **u_tokns, char *line);
void frees_get_env(char *env_path);
void double_free(char **tokns);
int exec(char *cname, char **opts);
char *_getenv(const char *name);
char **tokenize(char *str, char *del, int len);
char *find(char *cname);

#endif
