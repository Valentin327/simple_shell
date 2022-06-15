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

size_t _getline(char **buf);
char *_strtok(char *line, char *delim);

#endif
