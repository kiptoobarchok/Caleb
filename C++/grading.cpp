#include <iostream>

using namespace std;
/*
 *80 - 100: A
 *70 - 79 : B
 *60 - 69 : F
 *50 - 59 : D
 *40 - 49 : E
 *   < 40 - F
 */

int main()
{
	int marks;

	cout << "Enter the student's marks for  grading: " << endl;

	cin >> marks ;

	cout << "marks : " << marks << endl;

	if (marks >= 90 && marks <= 100 )
	{
		cout << "A" <<endl;
	}
	else if(marks >= 70 && marks <= 79)
	{
		cout << "B" << endl;
	}

	else if(marks >= 60 && marks <= 69)
 	{
		cout << "C" << endl;
	}
	else if(marks >= 50 && marks <= 59)
 	{
		cout << "D" << endl;
	}
	else if(marks >= 40 && marks <= 49)
 	{
		cout << "E" << endl;
	}
	else if(  marks >= 0 && marks <= 39)
 	{
		cout << "F" << endl;
	}

	else 
	{
		cout << "The school marks ranges from 0 - 100." <<endl <<"Please enter valid marks" << endl;
	}

	cout << "This grading system is according to the schools dean of academics" << endl;

	cout << "Any missing marks is graded as a fail" << endl;

	return 0;
}
