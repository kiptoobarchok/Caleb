#include <stdio.h>
#include <string.h>

//check password entered by the user if correct compared with stored 

int main ()
{
	char saved_password[]="Caleb";

	char my_password[4];

	printf("Hi, can you please input your password : ");
	scanf("%s", my_password);

	if (strcmp(saved_password, my_password) == 0)
	{
		printf("Welcome, What can i do today for you Kiptoo\n");
	}
	else 
	{
		printf("Password Incorrect!!\nTry again.\n");
	}


	return 0;
}
