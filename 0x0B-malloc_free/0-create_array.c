#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 *
 * @size: the size of the char array
 * @c: initial value fo the array
 * Return: a pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr != NULL)
	for (i = 0; i < size; i++)
		*(ptr + i) = c;

	return (ptr);

}
