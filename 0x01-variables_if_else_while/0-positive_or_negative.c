#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
/* Print n is Psoitive */
	if (n > 0 )

	{
		printf( "is Positive\n");
	}
/* Print n is Negative */
	else if ( n < 0)
	{
		printf ("is Negative\n");
	}

/* Print n is Zero */
	else 
	{
		printf(" is Zero\n");
	}
 
	return (0);
}
