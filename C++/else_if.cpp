#include <iostream>

using namespace std;

int main()
{
	int age;

	cout << "Enter your current age : " << endl;

	cin >> age ;

	cout << "age : " << age << endl;

	if ( age <= 5)
	{
		cout << "That is a toddler" << endl;
	}
	 else if( age <= 13)
	 {
	 	cout << "children btw this age are kids" << endl;
	 }
	 else if( age <= 21)
	 {
	 	cout << "This are adolescents" << endl;
	 }

	 else 
	 {
	 	cout << "Above 21 are adults" << endl;
	 }

	 return 0;

}