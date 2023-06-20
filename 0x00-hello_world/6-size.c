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
	printf("size of a char: %ld\n byt(s)", sizeof(char));
	printf("size of an int: %ld\n byt(s)", sizeof(int));
	printf("size of a long int: %ld\n byt(s)", sizeof(long int));
	printf("size of a long long int: %ld\n byt(s)", sizeof(long long int));
	printf("size of a float: %ld\n byt(s)", sizeof(float));
	return (0);
}
