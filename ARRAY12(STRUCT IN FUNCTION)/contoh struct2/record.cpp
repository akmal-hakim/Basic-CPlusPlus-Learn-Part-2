#include <iostream>

using namespace std;

struct salespersonrec
	{
		char name[20];
		double salesbyquater[4];
		double total;
	};
void getdata(salespersonrec [][5],int);
void display(salespersonrec [][5],int);
void main()
{
	salespersonrec list[2][5];
	getdata(list,2);
	display(list,2);

	system("pause");
}

void getdata(salespersonrec list[][5],int listsize)
{
	int x;
	int quater=4;
	for (int i=0;i<listsize;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"Enter the salesPerson name:";
			cin>>ws;
			cin.getline(list[i][j].name,20);
			for(int x=0;x<quater;x++)
			{
				cout<<"Sales for "<<(x+1)<<" quater:";
				cin>>list[i][j].salesbyquater[x];
			}
		}
	}
}

void display(salespersonrec list[][5],int listsize)
{
	int i,x;
	int quater=4;

	 for(int i=0;i<listsize;i++)
	 {
		 cout<<"--------------------------------------Team"<<(i+1)<<"------------------------------"<<endl;
		 for (int j=0;j<5;j++)
		 {
			 cout <<"Name:"<<list[i][j].name<<endl;
			 for(int x=0;x<quater;x++)
			 {
				 cout<<"Sale for "<<(x+1)<<"quater :"<<list[i][j].salesbyquater[x]<<endl;
			 }
		 }
	  cout<<endl;
	 }
}