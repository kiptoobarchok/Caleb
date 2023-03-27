#include <stdio.h>

int main()
{

	int a;

	printf("Choose an exit either 1 or 2 : \n");
	scanf("%d", &a);

	if (a == 1)
	{
		printf("Baaaang!!! Seems luck is not on your side kid.\n THIS IS THE DEATH GATE!!!\n");
	}

	else
	{

		if (a == 2)
		{
			printf("\"Ha ha ha, look who's here , kid you sure have some dogshit luck to make it here\"\n \"Anyhoo you've made it to the other side.CONGRATULATIONS BUDDY\'--\'\" \n");
		}
				else 
				{
					printf("\"Daaaamn You! Do you not understand simple instructions!!\" \n");
				}
	}
 
	return 0;
}
