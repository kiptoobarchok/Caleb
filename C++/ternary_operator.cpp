#include <iostream>

using namespace std;

int main()
{
	int age;

	cout << "Enter your current age : " << endl;

	cin >> age ;

	cout << "age : " << age << endl;

	age <= 21 ? cout <<"You're underage"<< endl : cout << "You can enter the club" << endl;

	return 0;
}
