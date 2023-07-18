#include "main.h"
/**
 * _islower - checks if character is lower
 * @c:  char to be checked
 * Return: 1 if character is lower, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
