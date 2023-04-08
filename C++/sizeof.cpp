#include <iostream>
using namespace std;

int main()
{
	int age = 21;
	char grade = 'B';
	bool is_true = true;
	float height = 23.34;
	double height_2 = 23.34546267;

	cout << sizeof(age)<< "bytes- size of int" <<endl;
	cout << sizeof(grade)<< "bytes- size of char" <<endl;
	cout << sizeof(bool)<< "bytes- size of boolean" <<endl;
	cout << sizeof(float)<< "bytes- size of float" <<endl;
	cout << sizeof(double)<< "bytes- size of double" <<endl; // for more precision hence it holds more space
}
	