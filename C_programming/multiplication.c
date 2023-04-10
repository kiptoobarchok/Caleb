#include <stdio.h>
/*this program prints multiplication for any number between 1 and 10
 *ie 
 * a * 1
 * a * 2
 * a * 3
 * a * 4
 * a * 5
 * a * 6
 * a * 7
 * a * 8
 * a * 9
 * a * 10....
 */

void start (void);

int main ()
{
	start();
	return 0;
}

void start ()
{
	int a,i;

	printf("Enter value a (ie number whose multiplication from 1-100 is sought)\n");

	scanf("%d", &a);

	printf("a : %d\n", a);

	for ( i >= 0 ; i <= 100 ; i++)
	{
		printf("%d * %d = %d\n", a , i , a * i);
	}


}