#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a,b,div;

	cin >> a >> b;

	div = a/b;

	cout << fixed << setprecision(3) << (float) div << endl;

}