#include<iostream>
using namespace std;

double total(double);
double average(double);
double maximum(double,double);
double minimum(double,double);
void lessthaneight(double,double&);

main()
{
int count=2,num;
float sum,avg;
int max=0,small=0;
double less=0;
int lol=0;

    cout<<"Please enter 10 numbers:";
    cout<<endl;

while (count<=10)
{
	
	cout<<count<<".:";
	cin>>num;
	sum = total(num);
	maximum(num,max);
	minimum(num,small);
	lessthaneight(num,less);
    count++;    

}

avg = average(sum);

cout<<endl;
cout<<"Sum of 10 numbers:"<<sum<<endl;
cout<<endl;
cout<<"Average of 10 numbers:"<<avg<<endl;
cout<<endl;
cout<<"The biggest numbers:"<<max<<endl;
cout<<endl;
cout<<"The smallest number:"<<small<<endl;
cout<<endl;
cout<<"Total numbers which is less than 8:"<<less<<endl;

system("pause");

}


double total(double x)
{
	int totalup=0;
	totalup = totalup + x;
	return totalup ;
}


double average(double x)
{
	int avgs;
	avgs = x/10;
	return avgs;
}


void lessthaneight(double x ,double& y)
{
	if (x<8)
	{
		y=y+x;
	}
}

double maximum(double z ,double d)
{
	
	if (z>d)
	{
		z=d;
	}
return d;
}

double minimum(double z, double e)
{
	if(z<e)
	{
		z=e;
	}
return e;
}
