#include <stdio.h>

/**
 * main - Prints all single digit numbers without
 * using any variable of char
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');

	return (0);
}
