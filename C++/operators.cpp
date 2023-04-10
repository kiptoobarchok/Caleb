#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a,b,sum,diff,mult,div,modulo;

	cout << "enter value a and b :" << endl;

	cin >> a >> b;

	sum = (a+b);
	diff = (a-b);
	mult = (a*b);
	div = (a/b);
	modulo = (a%b);

	cout << "The sum, difference, multiplication , division and modulo of the the values a and b are"<< endl;

	cout << sum << endl <<diff << endl<< mult << endl<< fixed << setprecision(4)<< (float) div<< endl << modulo << endl;
}