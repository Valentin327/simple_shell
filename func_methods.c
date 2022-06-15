#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}

	if (s1 != s2)
	{
		res = *s1 - *s2i;
	}
	return (res);
}

/**
 * _realloc - reallocates à memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @prevSize: size of the allocated memory for ptr
 * @newSize: size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int prevSize, unsigned int newSize)
{
	char *ptr1;
	char *prevPtr;
	unsigned int i;

	if (newSize == prevSize)
	{
		return (ptr);
	}
	if (newSize == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(newSize));
	}
	ptr1 = malloc(newSize);

	if (!ptr1)
	{
		return (NULL);
	}
	prevPtr = ptr;

	if (newSize < prevSize)
	{
		for (i = 0; i < newSize; i++)
		{
			ptr1[i] = prevPtr[i];
		}
	}
	if (newSize > prevSize)
	{
		for (i = 0; i < prevSize; i++)
			ptr1[i] = prevPtr[i];
	}
	free(prevPtr);
	return (ptr1);
}

/**
 * _strtok - function that divides a string with a delimiter
 * @strToDiv: string to divide
 * @delim: delimiter
 * Return: copystr
 */
char *_strtok(char *strToDiv, char *delim)
{
	int j;
	static char *str;
	char *copystr;

	if (strToDiv != NULL)
	{
		str = strToDiv;
	}
	for (; *str != '\0'; str++)
	{
		for (j = 0; delim[j] != '\0'; j++)
		{
			if (*str == delim[j])
				break;
		}
		if (delim[j] == '\0')
			break;
	}
	copystr = str;
	if (*copystr == '\0')
		return (NULL);
	for (; *str != '\0'; str++)
	{
		for (j = 0; delim[j] != '\0'; j++)
		{
			if (*str == delim[j])
			{
				*str = '\0';
				str++;
				return (copystr);
			}
		}
	}
	return (copystr);
}

/**
 * _strcat - function that concatenates two string
 * @dest: string to copy to
 * @src: string to copy
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	int lengthSrc = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	lengthSrc = _strlen(src);
	dest = _realloc(dest, i, j, lengthSrc + i + 1);
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: string
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	new_str = (char *)malloc(sizeof(char) * size + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
