#include <stdio.h>

/**
 * main - This is the main function
 *
 * Description: prints a-z in reverse mode
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}

	putchar('\n');

	return (0);
}
