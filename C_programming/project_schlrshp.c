#include <stdio.h>
/**
  *the program asks the user to input : name 
  *                                     age
  *                                     score got in the general interview
  *score 1- pass
  *      2- Average
  *      3- fail
  *
  *if pass then congratulations and prompts the user to continue : choose school X or Y
                                              if X : welcome to Moringa school\; an ivy league of its own
					      if K : Congratulations on choosing ALX school\;we wont disppoint ur expectation

  *if average :
               pass message to user " u've done a good job...."

	       u've been posted to an online school Z

  *if fail :
              "we're sorry try again next time

	      Printf (choose Y/N )
	            if y : Welcome back our interview starts shortly
		    if n : Good luck in ur endeavours
  */

int main ()
{
	char name[20];

	int age;
	int choice;

	int score;

        printf("Enter your name:");
	printf("\n");
	scanf("%s", name);
	fgets(name , sizeof(name), stdin);
	
	printf("Enter age :\n");
	scanf("%d", &age);
	printf("\n");

	printf("Hello %s\nWhat was your score during the interview?\n", name);
        printf("\n");

	printf("NB:The interview grading scores is as follows:\n 1=pass\n 2=average\n 3=fail\n");
	scanf("%d", &score);

	if (score == 1)
	{
		printf("Congratulations!!\nYou've been awarded the full scholarship program for your SE application\n");

			printf("You can choose between these two schools:\nNB:Enter 3 or 4\n3=Moringa\n4= ALX\n");
			printf("\n");
			printf("Enter your choice :%d\n",choice);
			scanf("%d",&choice);
			printf("\n");

			if (choice == 3)

			{
				{
					printf("welcome to Moringa school!!\nAn ivy league school of its own\n");
				}
			}

			else if (choice == 4)
			{
				printf("Congratulations on choosing ALX school\nWe won't disppoint your expectation\n");
			}

			else 
			{
				printf("choose between 3 and 4 only\n");

			}

	}

	else if(score == 2)
	{
		printf("You have done a great job buddy, but not to our maximum expectation\nHowever you've gotten yourself a spot at Holberton online school\nCONGRATS!!\n");
	}

	else 
	{
		printf("We're sorry buddy\nDo you wish to try again the interview?\n");

		printf("Enter Y to continue and X to forfeit\n");
		char cont;

		if (cont == 'Y')
		{
			printf("Wait a moment\nWe're redirecting you to our home page to start over.GOODLUCK.");
		}

		else if (cont == 'X')
		{
			printf("Thanks for taking your time to do this interview\nWe wish you well in your endeavours\n");
		}
		else
		{
			printf("That is not within our parameters!\n Enter Y or X\n");
		}
	}

		return 0;
}










