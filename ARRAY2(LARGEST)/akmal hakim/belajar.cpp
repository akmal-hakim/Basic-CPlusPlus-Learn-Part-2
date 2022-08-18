#include <iostream>
using namespace std;

void add(int marks[],int size);
void show(int marks[],int size);
void highestmark(int marks[],int size);
void main()
{
	int marks[5];
	int size=5;

	add(marks,size);
    show(marks,size);
	highestmark(marks,size);
	system("pause");
}

void add(int marks[],int size)
{
	cout<<"please enter marks:";
	cout<<endl;
	int index;
	for(index=0;index<size;index++)
	{
		cin>>marks[index];
		
	}

}

void show(int marks[],int size)
{	
	int index;
	double sum=0;
	
	for(index=0;index<size;index++)
		sum= sum + marks[index];

	cout<<"all mark:";
	for(index=0;index<size;index++)
	 cout << marks[index]<<" ";

	cout<<"\nTotal mark :";
	cout<< sum;
    cout<<endl;
}

void highestmark (int marks[], int size)
{
	double largest;
	int maxindex = 0;
	int index;

	for (index=1;index<size;index++)
		if (marks[maxindex]< marks[index])
			maxindex = index;
	
	largest = marks[maxindex];

	cout<<"\nLargest marks is:"<<largest;
}
