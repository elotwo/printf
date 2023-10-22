#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * num_n - A program that prints numbers
 * @n: variable for integer value
 * Return: (0)
 */
int num_n(int n)
{
	int num_digits = 0;
	int temp = n;
	char *digits;
	int i;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		putchar('0');
	}
	while (temp > 0)
	{
		temp /= 10;
		num_digits++;
	}
	digits = (char *)malloc(num_digits * sizeof(char));

	for (i = num_digits - 1; i >= 0; i--)
	{
		digits[i] = n % 10 + '0';
		n /= 10;
	}
	for (i = 0; i < num_digits; i++)
	{
		putchar(digits[i]);
	}
	free(digits);
	putchar('\n');
	return (0);
}
