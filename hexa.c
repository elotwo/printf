#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 */
int hexadec(int decemal)
{
	int quotient = decemal;
	int remainder;
	int i = 0;
	int j;
	char hexadece[100];

	if (decemal == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	while (quotient != 0)
	{
		remainder = decemal / 16;
		if (remainder < 10)
			hexadece[i++] = remainder + '0';
		else
			hexadece[i++] = remainder + 'A' - 10;
		quotient = quotient / 16;
	}
	_putchar('0');
	_putchar('x');
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hexadece[j]);
	}
	_putchar('\n');
	return (0);
}
int main(void)
{
	int a = 15;
	hexadec(a);
	return (0);
}

