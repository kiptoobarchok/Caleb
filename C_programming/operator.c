#include <stdio.h>

//use various operators ie %, * , + ,-...

int main()
{
	int studentA;
	int studentB;
	int studentC;
	int sum;


	printf("enter the marks of the three students : \n");

	scanf("%d%d%d", &studentA, &studentB, &studentC);

        sum = studentA + studentB + studentC ;

	printf("total sum : %d", sum);

	return 0;
}
