#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program to multiply two args passed into it
 * @argc: hold the number of args passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
