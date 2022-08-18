#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ofstream fileOut("contoh.txt");
	ifstream fileIn("contoh.txt");
	char ch,name[20],ic[14];
	int age;

	for ( int i=0;i<5;i++)
	{
		cout<<"Name :";
		cin>>name;
		fileOut<<name;
		cout<<"Age  :";
		cin>>age;
		fileOut<<" "<<age;
		cout<<"IC No :";
		cin>>ic;
		fileOut<<" "<<ic;
		fileOut<<endl;
	}

	while(!fileIn.eof())
	{
		fileIn.get (ch);
		cout << ch;
	}

	fileIn.close();
	fileOut.close();

	system("pause");
	return 0;
}