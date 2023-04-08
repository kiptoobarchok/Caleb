#include <iostream>
using namespace std;

int main()
{
	int age = 21;
	char grade = 'B';
	bool is_true = true;
	float height = 23.34;
	double height_2 = 23.34546267;

	cout << sizeof(age)<< "- size of int" <<endl;
	cout << sizeof(grade)<< "- size of char" <<endl;
	cout << sizeof(bool)<< "- size of boolean" <<endl;
	cout << sizeof(float)<< "- size of float" <<endl;
	cout << sizeof(double)<< "- size of double" <<endl; // for more precision hence it holds more space
}
	