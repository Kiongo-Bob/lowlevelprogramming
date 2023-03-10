#include <stdio.h>
/**
 * main - print all arg(s) received.
 * @argc: no. of cmd line arg(s).
 * @argv: arr that contains the program cmd line arg(s).
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
