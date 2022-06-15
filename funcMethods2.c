#include "main.h"

/**
 * _strlen: function that calculate the size of a string
 * @str: input string
 * Return: will return the length of the string
 */
int _strlen(char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}
/**
 * _atoi - function that converts string to integer
 * @str: input string
 * Return: an integer that result of the convertion
 */
int _atoi(char *str)
{
	int sign = 1;

	unsigned int num = 0;

	do {
		if (*str == '-')
			sign = -1;
		else if (*str >= '0' && *str <= '9')
			num = (num * 10) + (*str - '0');
		else if (*str < '0' || *str > '9')
			return (-1);
		else if (num > 0)
			break;
	} while (*(++str));

	return (num * sign);
}

/**
 * convert_integer - function that converts integers to strings
 * @number: integer to converts
 * Return: pointer to char
 */
char *convert_integer(int number)
{
	char *num;
	int tmp, digits;

	tmp = number;
	
	for (digits = 0; tmp != 0; digits++)
		tmp = tmp / 10;
	num = malloc(sizeof(char) * (digits + 1));
	if (num == NULL)
		return (NULL);
	num[digits--] = '\0';
	
	for (; number; digits--)
	{
		num[digits] = (number % 10) + '0';
		number = number / 10;
	}
	return (number);
}

/**
 * _strcpy -function that copies the string
 * @dest: string to copy to
 * @src: string to copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] != '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
