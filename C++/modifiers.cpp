#include <iostream>
using namespace std;

int main()
{
	long int phone_number = 254702171495; // long assigns the interger more space
	int number = phone_number; // mem overflow 

	cout << "phone_number = " << phone_number << endl;
	cout << "number : " << number << endl;

	cout << "size of phone_number(long int) :" << sizeof(phone_number) << endl;
	cout << "size of number(int) :" << sizeof(number) << endl;

}