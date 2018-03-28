#ifndef HEAD_H
#define HEAD_H
/* MACROS */
#define sDELIM " \t\r\n\a"
/* END MACROS */

extern char **environ;

/* HEADERS */
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* END HEADERS */

/* SHELL FUNCTIONS */
int shell_start(char **args);
int shell_cd(char **args);
int _help(char **args);
int shell_exit(char **args);
int execute(char **args);
int num_funcs(void);
void sighandle(int signal);
/* END SHELL FUNCTIONS */

/* HELPER FUNCTIONS */
void sloop(void);
char *sread(void);
char **tok(char *str);
int _putchar(char c);
int _strlen(char *str);
int _env(char **args);
/* END HELPER FUNCTIONS */
#endif
