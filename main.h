#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

#define DELIM " \t\n"

extern char **environ;

/* bltin.c */
int builtin(char *cmd);
void builtin_handle(char **cmd, char **argv, int *sta, int idx);

/* env.c */
char *_getenv(char *name);
void print_env(char **cmd, int *sta);
char *_getpath(char *cmd);

/* exit.c */
void exitsh(char **cmd, char **argv, int *s, int index);

/* get-exe.c */
int exec(char **command, char **argv, int idx);
char *get_line(void);

/* str.c */
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
int _strcmp(char *str1, char *str2);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);

/* tkn.c */
char **tkn(char *line);

void free_modified(char **arr);

ssize_t _getline(char **line, size_t length, int position);

void _env(void);
void _perror(char *prog, char *cmd, int ctr);

int _atoi(char *s);
int is_positive(char *str);
char *_atoi_rev(int n);
void str_rev(char *str, int len);
int print_str(char *str);
int print_char(char c);

#endif
