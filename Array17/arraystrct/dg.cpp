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

void getData (salesPersonrec& list)
{
	int x,quater=4;
	cout<<"\nEnter the salesPerson ID:";
	cin>>list.ID;
	cout<<"Enter the salesPerson Name:";
	cin>>list.name;
	  
	list.total=0;          //HOW TO STORE ARRAY IN RECORD
	for(x = 0; x<quater;x++)
	  {
		  cout<<"Sales for "<<(x+1)<<" quater:";
		  cin>>list.saleByQuarter[x];
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
	list.total = list.total + saleByQuater[x];
	return list.total;
}