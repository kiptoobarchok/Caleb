#include <iostream>

using namespace std;

int main()
{
	int age;

	cout << "Enter your current age : " << endl;

	cin >> age ;

	cout << "age : " << age << endl;

	if ( age >= 18)
	{
		cout << "Welcome. You can enter the  club" << endl;
	}
	 else
	 {
	 	cout << "We are very sorry.This is for adults only. Thanks for coming" << endl;
	 }

}