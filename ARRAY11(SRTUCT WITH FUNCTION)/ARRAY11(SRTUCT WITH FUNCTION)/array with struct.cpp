#include <iostream>
#include <conio.h>
using namespace std;

const int listSize=2;

struct salesPersonRec
{
	char ID[10],name[20];
	double saleByQuarter[4];
	double total;
};

void getData (salesPersonRec list[], int listSize);
void printReport (salesPersonRec list[], int listSize);
void totalSalesbyPerson (salesPersonRec list[], int listSize);
int highestSales (salesPersonRec list[], int listSize);

int main()
{
	salesPersonRec salesPersonList[listSize];
    getData (salesPersonList,listSize);
	printReport (salesPersonList,listSize);
    _getch();
	return 0;
}

void getData (salesPersonRec list[], int listSize)
{
	int i,x;
	int quater=4;
	  for (i=0;i<listSize;i++)
	  {
		  cout<<"Staf "<<i+1;
		  cout<<"\nEnter the salesPerson ID:";
		  cin>>list[i].ID;    //HOW TO STORE USING STRUCT
		  cout<<"Enter the salesPerson Name:";
		  cin>>list[i].name;

		  list[i].total=0;
		  for(x=0;x<quater;x++)   //EXAMPLE STRUCT HAVE AN ARRAY
		  {
			  cout<<"Sale for "<<x+1<<" quater:";
			  cin>>list[i].saleByQuarter[x];
			  totalSalesbyPerson(list,i,x);
		  }
	  }
}

void printReport (salesPersonRec list[],int listSize)
{
	int i,x,quater=4;

	for(i=0;i<listSize;i++)
	{
		cout<<"-------------------------------"<<endl;
		cout<<"STAFF :"<<i+1;
		cout<<"\nID  :"<<list[i].ID<<endl;
		cout<<"NAME  :"<<list[i].name<<endl;

		for (x=0;x<quater;x++)
		{
			cout<<"Quater "<<x+1<<":"<<list[i].saleByQuarter[x]<<endl;
		}
		cout<<"Total Sales :"<<list[i].total<<endl;
	}
	int highest = highestSales(list,listSize);
	cout<<"\nHighest :"<<highest;
}

int highestSales(const salesPersonRec list[],int listSize)
{
	int hSale = list[0].total;
	for(int i=0;i<listSize;i++)
		if (list[i].total>hSale)
		{
			hSale=list[i].total;
		}
		return hSale;
}


void totalSalesbyPerson (salesPersonRec list[],int i,int x)
{
	list[i].total=list[i].total+list[i].saleByQuarter[x];
}

