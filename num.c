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
	int a = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 9)
		num_n(n / 10);
	_putchar('0' + (a % 10));
	return (0);
}
/**
 * print_binary - A program that convert decimal to
 * binary
 * @n: variable number to be entered
 * Return: (0)
 */
int print_binary(unsigned int n)
{
	int bitpo;
	int ledzer;

	if (n == 0)
	{
		printf("0");
	}
	bitpo = 1 << 30;
	ledzer = 1;
	while (bitpo > 0)
	{
		if (n & bitpo)
		{
			ledzer = 0;
			printf("1");
		}
		else if (!ledzer)
		{
			printf("0");
		}
		bitpo = bitpo >> 1;
	}
	return (0);
}
