#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>

/**
 * struct varInput - struct
 * @count: counter
 * @buffer: buffer
 * @array_inputs: array_inouts
 * @name_pro: name_pro
 * @exitstatus:existatus
 * typedef input_v: new name struct
 */
typedef struct varInput
{
	int count;
	char *buffer;
	char **array_inputs;
	char *name_pro
	int exitstatus;
} input_v;

/**
 * struct com_struct - struct
 * @name: name
 * @p: p
 * typedef command_v: new name struct
 */
typedef struct com_struct
{
	char *name;
	int (*p)(input_v *, char **);
} command_v;


size_t _getline(char **buf);
char *_strtok(char *line, char *delim);
char **_tokenizer(char *buf, char *delimitChar);
void *_realloc(void *ptr, unsigned int prevSize, unsigned int newSize);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
char *_strtok(char *strToDiv, char *delim);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
int _atoi(char *str);
char *convert_integer(int number);
#endif
