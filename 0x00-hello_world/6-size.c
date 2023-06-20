#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: C program that prints the size of various types on the computer
 *
 * Return: Always (0) (success)
 */
int main(void)
{
	printf("size of a char: %ld byt(s)\n", sizeof(char));
	printf("size of an int: %ld byt(s)\n", sizeof(int));
	printf("size of a long int: %ld byt(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byt(s)\n", sizeof(long long int));
	printf("size of a float: %ld byt(s)\n", sizeof(float));
	return (0);
}
