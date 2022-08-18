#include <iostream>
#include <conio.h>
using namespace std;
const int listSize=2;

struct salesPersonRec
{
	char ID[5],name[20];
	double saleByQuarter[4];
	double total;

};

void getData (salesPersonRec&);
void printReport(salesPersonRec&);
double totalSalesbyPerson(salesPersonRec&,int);

int main()
{
	salesPersonRec salesPersonList;

	getData(salesPersonList);  //F
	printReport(salesPersonList);

	_getch();
	return 0;
}

void getData (salesPersonRec& mona)
{
	int x,quater=4;
	cout<<"\nEnter the salesPerson ID:";
	cin>>mona.ID;
	cout<<"Enter the salesPerson Name:";
	cin>>mona.name;
	  
	mona.total=0;          //HOW TO STORE ARRAY IN RECORD
	for(x = 0; x<quater;x++)
	  {
		  cout<<"Sales for "<<(x+1)<<" quater:";
		  cin>>mona.saleByQuarter[x];
	  }
}

void printReport (salesPersonRec& list)
{
	int x,quater=4;
	double total;
       cout<<"\nID  :"<<list.ID<<endl;
	   cout<<"Name  :"<<list.name<<endl;
	   for (x=0;x<quater;x++)
	   {
		   cout<<"Quater  "<<(x+1)<<":"<<list.saleByQuarter[x]<<endl;
		   total = totalSalesbyPerson(list,x);   //FUNCTION CALL
	   }
	   cout<<"Total sales: "<<total;
}

double totalSalesbyPerson(salesPersonRec& list,int x)
{
	list.total = list.total + list.saleByQuarter[x];
	return list.total;
}