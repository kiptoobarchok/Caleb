#include <stdio.h>
#include <stdlib.h>

/**
 * struct can be defined outside the global scope of the main function
 * elements can be accessed using the (.) notation
 * typedef - used as alias
 **/

typedef struct info_user info; /*alias struct as info*/

struct  info {
    char *name;
    char *email;
    char *school;
    int age;

}; 

struct info person1, person2, person3; /*variables*/

int main()
{

	struct info person1 = {"Caleb", "Kiptoocaleb8032@gmail.com", "ALX", 22};
	struct info person2 = {"Abel", "abel5134@gmail.com", "kaborok", 26};

	printf("name : %s\n", person1.name);
	printf("email : %s\n", person1.email);
	printf("school : %s\n", person1.school);
	printf("age: %d\n", person1.age);
	printf("\n");

	printf("name: %s\n", person2.name);
    printf("email: %s\n", person2.email);
    printf("school: %s\n", person2.school);
    printf("age: %d\n", person2.age);


	return (0);    
}

