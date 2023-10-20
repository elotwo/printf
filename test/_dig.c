#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 */
int _digit(int num)
{
	if ( num == 0)
	{
		putchar('0');
		return (0);
	}
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	
	char buffer[32];
	int index = 0;
	int i;
	while (num > 0)
	{
		buffer[index++] = '0' + (num % 10);
		num /= 10;
	}
	for (i = index - 1; i >= 0; i--) 
	{
		putchar(buffer[i]);
	}
}
