#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int x, y;

x = 5;

y = ++x * ++x;

cout << x << endl<< y << endl;

y = x++ * ++x;

cout << x << endl<< y << endl;
}
