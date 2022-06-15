#include "main.h"

/**
 * _tokenizer - function that separate item
 * @buf: string to separate
 * @delimitChar: separator
 * Return: pointer to buf
 */
char **_tokenizer(char *buf, char *delimitChar)
{
	char **token = NULL;
	size_t i = 0;
	unsigned int mcount = 10;

	if (buf == NULL)
	{
		return (NULL);
	}
	token = malloc(sizeof(char *) * mcount);
	if (token == NULL)
	{
		return (NULL);
	}
	while ((token[i] = _strtok(buffer, delimiter)) != NULL)
	{
		i++;
		if (i == mcount)
		{
			token = _realloc(token, mcount, 2 * mcount);
			if (token == NULL)
			{
				return (NULL);
			}
		}
		buf = NULL;
	}
	return (token);
}
