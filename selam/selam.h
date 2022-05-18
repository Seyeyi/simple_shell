#ifndef _SELAM_H_
#define _SELAM_H_

/* Required libraries */
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>


/* Function prototypes for 0 -3  functions*/
void _newpt(void);
char *_read(void);
char **_line(char *line);
int _execute(char **args, char *input);
int _launch(char **args);
void _signal(int sig);

/* Function prototypes for for builtin(4-5) shell commands
int hsh_exit(char **args, char *input);
int _cd(char **args, __attribute__((unused)) char *input);

#endif
