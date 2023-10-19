#include<stdio.h>

void start(void);

int main()
{
	start();
	return 0;
}

void start()
{
	int grade;

	printf("enter the grade :");
	scanf("%d", &grade);

	printf("as per the classification of our grading your score is : \n");

	if (grade == 100)
	{
		printf("Perfect\n");
	}

	else if(grade >= 90 && grade < 100)
	{
		printf("Excellent\n");
	}

	else if(grade >= 80 && grade < 90)
	{
		printf("great\n");
	}

	else if(grade >= 70 && grade < 80 )
	{
		printf("good\n");
	}

	else if(grade >= 60 && grade < 70)
	{
		printf("average\n");
	}

	else if(grade >= 50 && grade < 60)
	{
		printf("not bad\n");
	}
	else if( grade >= 40 && grade < 50)
	{
		printf("Fail\n");
	}

	else 
	{
		printf("Our score only ranges from 1- 100\n");
	}
}
