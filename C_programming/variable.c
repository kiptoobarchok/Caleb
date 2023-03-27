#include <stdio.h>
/**
  *int - main
  *
  *return -0
  */
int main ()
{
	int x;

	int y;
	
	printf("enter value of x and y : \n");

	scanf("%d %d", &x, &y);

	int sum = x + y;
        
	printf("the sum of x and y is : ");
	printf("%d\n", sum);
	
	return 0;
}
