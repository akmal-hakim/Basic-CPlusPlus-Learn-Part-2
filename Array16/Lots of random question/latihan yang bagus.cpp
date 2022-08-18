#include <iostream>
using namespace std;

int add(int,int);

float avg(int);

int disBig(int);

int disSmall(int);

void countEight(int,int&);

int main()
{
	int total = 0;
	
	int num, big, small, totalEight;
	float average;
		
	cout << "Enter number 1 :";
	cin >> num;
		
	total = add(num,total);
	
	big = num;
	small = num;
	countEight(num, totalEight);
	
	for(int x = 2; x <= 10; x++)
	{
		int num;
		
		cout << "Enter number " << x << " :";
		cin >> num;
		
		total = add(num,total);
		
		if(num >= big)
			big = num;
			
		if(num <= small)
			small = num;
			
		countEight(num, totalEight);
	}
	
	average = avg(total);
	
	cout << endl << "The sum of 10 numbers is: " << total << endl;
	cout << "The average of 10 numbers is: " << average << endl;
	disBig(big);
	disSmall(small);
	cout << "The total numbers entered which is less than 8 is: " << totalEight << endl;
	
	system("pause");
	return 0;
	
}

int add(int num, int tot)
{
	tot = tot + num;
	
	return tot;
}

float avg(int total)
{
	float average;
	
	average = total / 10.0;
	
	return average;
}

int disBig(int biggest)
{
	cout << "The biggest number is: " << biggest << endl;
	return 0;
}

int disSmall(int smallest)
{
	cout << "The smallest number is: " << smallest << endl;
	return 0;
}

void countEight(int number, int& total)
{
	if(number < 8)
		total=total+1;
}
