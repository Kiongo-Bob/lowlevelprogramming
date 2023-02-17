#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the main function
 * Description - The program prints all possible combination of two digits
 *
 * Return: always (0) success
*/

int main(void)
{
	int num1, num2, num3, num4 = 10;

	while (num4 < 10)
	{
		num3 = 0;
		while (num3 < 10)
		{
			num2 = 0;
			while (num2 < 10)
			{
				num1 = 0;
				while (num1 < 10)
				{
					if (!(num4 == num1 && num3 == num2))
					{
						putchar('0' + num4);
						putchar('0' + num3);
						putchar(' ');
						putchar('0' + num2);
						putchar('0' + num1);
						if (!(num4 + num3 == 18 && num1 + num2 == 17 && num2 == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					num1++;
				}
				num2++;
			}
			num3++;
		}
		num4++;
	}
	putchar('\n');
	return (0);
}
