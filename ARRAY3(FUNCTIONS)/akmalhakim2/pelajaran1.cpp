#include <iostream>
using namespace std;

void infoSales(double sales[],int size);

void infoPurchases(double purchase[],int size);

void reportProfit(double purchase[], double sales[],int size);

void reportGeneral(double sales[],double purchase[],int size);

void main()
{
	const int size=12;
	double purchase[12];
	double sales[12];
	
	
	infoSales(sales,size);
	infoPurchases(purchase,size);
	reportProfit(purchase,sales,size);
	reportGeneral(sales,purchase,size);

	system("pause");
}

void infoSales(double sales[],int size)
{
	int index;
	for(index=0;index<size;index++)
	{
		cout<<"Sales"<<index+1<<":";
		cin>>sales[index];
	}

}

void infoPurchases(double purchase[],int size)
{
	int index;
    for(index=0;index<size;index++)
	{
		cout<<"Purchase"<<index+1<<":";
		cin>>purchase[index];
	}

}

void reportProfit(double purchase[], double sales[],int size)
{
	double profit[12];
	int index;
	cout<<"MONTH"<<"\t\t"<<"SALES"<<"\t\t"<<"PURCHASES"<<"\t\t"<<"PROFIT"<<endl;
	
	for(index=0;index<size;index++)
    profit[index]= sales[index]-purchase[index];

	
	for(index=0;index<size;index++)
    cout<<index+1<<"\t\t"<<sales[index]<<"\t\t"<<purchase[index]<<"\t\t"<<profit[index]<<endl;
	
}

void reportGeneral(double sales[],double purchase[],int size)
{
   	int highIndex = 1, lowIndex = 1;
	for(int i=1;i<size;i++)
	{	
	if (sales[highIndex]<sales[i])
		highIndex=i;
	if (sales[lowIndex]>sales[i])
		lowIndex=i;
	}

	cout<<"\n\tThe highest sales :"<<sales[highIndex]<<endl;
	cout<<"\n\tThe lowest sales :"<<sales[lowIndex]<<endl;
}