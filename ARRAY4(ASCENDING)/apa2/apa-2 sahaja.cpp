#include <iostream>
using namespace std;

void main()
{
	double sales[10];
	int index;
	double largestsale,sum,average;
	int maxindex;

	for (index=0;index <10;index++)
		cin >> sales[index];

	for (index=0;index<10;index++)
		cout << sales[index]<<" ";

	sum = 0;
	for (index=0;index<10;index++)
		sum = sum +sales[index];

	average=sum/10;

	cout<<"\nAverage ="<<average;

	maxindex = 0;
	for (index=1;index<10;index++)
		if (sales[maxindex] < sales[index])
		       maxindex = index;

	largestsale = sales[maxindex];
	
    cout<<"\nLargest sales ="<<largestsale;

	int less=0;
	
	for (index=0;index<10;index++)
		if (sales[index]<100)
			less++;

	cout<<"\nSALES THAT IS LESS THAN HUNDRED IS"<<less;
	
	int target,arraysize;
	
	cout<<"\nPlease enter target:";
	cin>>target;
	for (index =0; index<10 ; index++)
	{
		if (sales[index] > target)
		{
			cout<<"\nTarget found as index"<<index;
		}
	
	}

	
	
	int length;
	int temp;
	int iteration;
	for (iteration =1; iteration<length;iteration++)
	{
		for (index=0;index<length-iteration;iteration++)
			if ( sales[index] > sales[index +1])
			{
				temp = sales[index];
				sales[index] = sales[index +1];
				sales[index +1] = temp;
			}
	}

	cout<<"\nSALES IN ASCENDING ORDER:";
	for (index=0;index<10;index++)
		cout << sales[index]<<" ";
	
	
	system("pause");

}

