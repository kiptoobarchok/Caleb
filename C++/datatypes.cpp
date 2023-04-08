#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	int age = 21;
	char grade = 'B';
	bool is_true = true;
	float height = 23.34;
	double height_2 = 23.34546267;

	cout << age << endl;
	cout << grade << endl;
	cout << is_true << endl;
	cout << height << endl;
	cout << fixed << setprecision (8) << height_2<<endl;


}