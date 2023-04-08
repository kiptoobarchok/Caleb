#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a,b,c,d,e;

	cin >> a >> b >> c >> d >> e ;

	int sum = a+b+c+d+e;

	cout << "average = "<< fixed << setprecision(4)<< (float)sum/5<< endl;

}