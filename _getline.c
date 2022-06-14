#include "main.h"

/**
 * _getline - function that gets the commands by input
 * from the terminal
 * @buf: Variable that stores the commands
 * Return: len
 */
size_t _getline(char **buf)
{
	ssize_t i = 0, ind_end = 0, len = 0;
       	char buffer[1000];
	
	while (ind_end == 0 && (i = read(STDIN_FILENO, 1000 - 1)))
	{
		if (i == -1)
			return (-1);
		buffer[i] = '\0';
		n = 0;
		while (buffer[n] != '\0')
		{
			if (buffer[n] == '\n')
				ind_end = 1;
			n++;
		}

		if (len == 0)
		{
			len = i;
			buf[0] = malloc(len + 1);
			buf[0] = _strcpcy(buf[0], buffer);
		}
		else
		{
			len = len + i;
			buf[0] = _strcat(buf[0], buffer);
		}
	}

	return (len);
}
