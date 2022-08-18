#include <iostream>
using namespace std;

struct shape
{
	double height,width,area;
};

double areaOfRectangle(double,double);
void printOutput(shape);
void input(double& ,double& );

int main()
{
	shape rectangle;


	input(rectangle.height,rectangle.width);
	printOutput(rectangle);
	cout<<endl;

	system("pause");
	return 0;
	
}

double areaOfRectangle(double h, double w)
{
	double a;
	a = h*w;
		return a;

}

void printOutput (shape rectangle)
{
	rectangle.area = areaOfRectangle(rectangle.height,rectangle.width); //FUNCTION CALL
	cout<<"\nArea of Rectangle:"<<rectangle.area;
}

void input (double& h, double& a)
{
	cout<<" Enter height: ";
	cin>>h;
	cout<<" Enter width: ";
	cin>>a;
}