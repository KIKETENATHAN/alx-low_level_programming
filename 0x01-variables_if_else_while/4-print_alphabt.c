#include <stdio.h>
/**
 *main - main entry point
 *Return: always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
		{
			if (alphabet != 'q' && alphabet == 'e')
			{
				putchar(alphabet);
			}
				alphabet++;
		}
	putchar('\n');
	return (0);
}
