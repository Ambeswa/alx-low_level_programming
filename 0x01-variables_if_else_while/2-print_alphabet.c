#include<stdio.h>

/**
 *  main - Entry poitn
 *
 *  Description: print all alphabet letters
 *
 *  Return: always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
