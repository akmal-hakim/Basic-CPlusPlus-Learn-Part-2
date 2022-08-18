#include <iostream>
using namespace std;

int indexHighest ( int cars[], int size);

float findavg(int cars[], int size);

void sortingcars(int cars[],int size);

void main()
{
  const int size =7;
  int cars[size] = {423,233,289,200,198,312,381};
  int maxcar;
  double average;

  cout<<"Cars sales:";
  for (int i=0;i<size;i++)
		cout<<cars[i]<<" ";

  maxcar = indexHighest(cars,size);
  average = findavg(cars,size);
  sortingcars(cars,size);

  cout <<"\nMax car sales:"<<maxcar;
  cout<<"\nAverage car sales:"<<average<<endl;
  system("pause");
}

int indexHighest (int cars[], int size)
{
	int maxIndex=0;
	for (int i=1;i<size;i++)
		if (cars[maxIndex]<cars[i])
			maxIndex=i;

	return cars[maxIndex];
}

float findavg( int cars[], int size)
{
	double avg;
	int sum = 0;
	for (int i=0;i<size;i++)
		sum = sum + cars[i];
	avg = sum/7;
	return avg;
}

void sortingcars(int cars[], int size)
{
	int temp;
	for( int iteration=1;iteration<size;iteration++)
	{
		for( int index=0;index<size-iteration;index++)
		{
			temp=cars[index];
			cars[index] = cars[index+1];
			cars[index+1]=temp;
		}
	}
	cout<<"\nIn descending order"<<endl;
	for (int i=0;i<size;i++)
		cout<<cars[i]<<" ";
}