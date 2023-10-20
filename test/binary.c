#include <stdio.h>
#include "main.h"
/**
 */
int _binary(unsigned int num)
{
	if(num == 0)
	{
		putchar('0');
		return (0);
	}
	int binary[32];
	int index = 0;
	int i;
	
	while (num > 0) 
	{
		binary[index++] = num % 2;
		num /= 2;
	}
	for (i = index - 1; i >= 0; i--) 
	{
		putchar('0' + binary[i]);
	}
}
