#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the characters c to stdout 
 * @c: the character to print
 * Return: on sucess 1
 * on error: -1 is returned and error no. is set appropriately 
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
