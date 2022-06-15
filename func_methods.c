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
void * _realloc(void *ptr, unsigned int prevSize, unsigned int newSize)
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
