#include <iostream>
using namespace std;

struct salesPersonRec
{
	char ID[20],name[30];
	double totalSale;
};

int main()
{
	salesPersonRec salesPersonList;

	cout<<"Enter the sales Person ID:";
	cin.getline(salesPersonList.ID,20);
	cout<<"Enter the sales Person name:";
	cin.getline(salesPersonList.name,30);

	cout<<"\nID :"<<salesPersonList.ID<<endl;
	cout<<"Name :"<<salesPersonList.name<<endl;
	return 0;

}