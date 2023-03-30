#include <stdio.h>
#include <string.h>
//struct in c stores multiple variables
// of different types 
//student info 
//          *age,name,school,height,grade
//access info in a struct
void start(void);

int main()
{
	start();
	return 0;
}

typedef struct
{
	char name[100];
	int age;
	char *school[100];
	int scores;
}student;

void start()
{
	student caleb = 21 , "Kabarnet High School"
	printf("%d %s\n", caleb.age,caleb.school);
}
