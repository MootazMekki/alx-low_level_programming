#include <stdio.h>

/**
*main-Entry point
*Description:program that prints a to z in lowercase
*return: always (0)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}
	putchar('\n');

	return (0);
}
