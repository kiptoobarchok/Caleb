#include <stdio.h>

//This program asks the user the weather and provides appropriate suggestions for clothing 
//it divides weather into : rainy, cloudy,sunny,windy
//The characters for each of the states of weather are :
// rainy- R,r
// cloudy - C,c
// windy - W,w
// sunny - S,s
//if its not raining (0)-false, tells them good day


int main ()
{
	char weather_type;

	printf("Hi, John Doe what's the weather today?\nplease use the following symbols\n");

	printf("windy-W,w\ncloudy-C,c\nrainy-R,r\nsunny-S,s\n");

	scanf("%c", &weather_type);

	switch(weather_type)
	{
		case 'W':
		case 'w':
			printf("You should probably look your closet for a heavy clothing,preferably cotton-made\n");
			break;

		case 'C':
		case 'c':
			printf("You're good to go  with a sweater/pullneck\n");
			break;

	        case 'R':
		case 'r':
			printf("make sure to have an umbrella with you\n");
			break;

		case 'S':
	        case 's':
			printf("Nice weather for a walk, a t-shirt and a short are fine for the day\n");

			break;

		default:

		printf("Use the weather symbols used please, try again!");

		break;

	}
	return 0;
}
