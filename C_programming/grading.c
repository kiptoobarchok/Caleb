#include <stdio.h>

void start(void);

int main()
{
	start();
	return 0;
}

void start()
{
	int grade;

	printf("enter the score :\n");
	scanf("%d",&grade);


	printf("The grading system for our school is as follows for your entry:\n");

	switch (grade)
	{
		case 91 ... 100 :
			printf("Excellent\n");
			break;

		case 81 ... 90 :
			printf("Great\n");
			break;

	        case 71 ... 80 :
			printf("better\n");
			break;

		case 61 ... 70 :
			printf("good\n");
			break;
	        case 51 ... 60 :
			printf("average\n");
			break;

		case 41 ... 50 :
			printf("not bad\n");
			break;
         	case 0 ... 40 :
			printf("fail\n");
			break;

		default : 
			printf("Incorrect\nThe score is between 1-100\n");
			break;
	}
}
