#include <stdio.h>

/**
 * main- Entry point
 * Description - prints all alphabets from a-z
 *
 * Return: always (0) success
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
