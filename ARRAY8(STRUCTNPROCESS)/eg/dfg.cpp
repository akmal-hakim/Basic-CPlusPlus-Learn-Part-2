#include <iostream>
using namespace std;

struct shape
{
	double height,width,area;
};

int main()
{
	shape rectangle;

	cout<<"Enter height:";
	cin>>rectangle.height;
	cout<<"Enter width:";
	cin>>rectangle.width;
	rectangle.area=rectangle.height*rectangle.width;
	cout<<"\nArea of Rectangle: "<< rectangle.area;
	return 0;

}