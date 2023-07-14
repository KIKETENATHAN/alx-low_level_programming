#include <stdio.h>
/**
 *main - main entry point
 *Return: always 0 (success)
 */
int main(void)
{
	char n;
	char l;

	n = '0';
	l = 'a';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
