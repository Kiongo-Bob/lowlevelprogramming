#include <stdio.h>

/**
 * main - This is the main function
 * Description - Prints all base 16 numbers i.e., 0 to 15
 *
 * Return: always (0) success
*/

int main(void)
{
	int num;
	char ch = 'a';

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
