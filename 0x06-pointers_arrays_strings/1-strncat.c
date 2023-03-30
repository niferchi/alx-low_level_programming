#include "main.h"
/**
 * _strncat - concatenate two strings but add the number of bytes
 * @dest: string to be appended
 * @src: string to be completed after src
 * @n:integer parameter to compare index to
 * Return: returns the concatenated string
 */char *_strncat(char *dest, char *src, int n)
{ 
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (inded = 0; src[index] && index < n; index++)
	       dest[dest_len++] = src[index];

	return (dest);
}	
