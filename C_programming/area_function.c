#include <stdio.h>

//create a function that calculates area

int area_rectangle(int l,int w)
{
	int area;
	area = l * w;

	return area;
}

int main()
{
	int l = 20;
	int w = 123;

	int area = area_rectangle (l,w);
	printf("%d\n", area);
}



