#include <stdio.h>

int add(int a,int b)
{
	int sum;
	sum = a + b;
	return sum;
}

int main()
{
	int a = 45;
	int b =23;
	int sum = add(a,b);

	printf("the sum of a and b is : %d",sum);
}
