#include <iostream>
using namespace std;

int main()
{
	string name = "Caleb ";
	string sec_name = "Kiptoo";

	string fullname = name.append(sec_name);

	cout << "length of string : " << fullname.length() << endl;

	cout << fullname << endl;
}