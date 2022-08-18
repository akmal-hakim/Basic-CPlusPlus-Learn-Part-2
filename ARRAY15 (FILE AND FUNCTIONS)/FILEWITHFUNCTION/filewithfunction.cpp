#include <iostream>
#include <fstream>
using namespace std;

void outfile(ofstream&,int[]);
void inputfile(ifstream&,int[]);
void outputlist(int[]);

int main()
{
	int data[5];
	ifstream filein("dataIn.txt");
	ofstream fileout("result.txt");

	inputfile(filein,data);
	outputlist(data);
	outfile(fileout,data);

	filein.close();
	system("pause");
	return 0;
}

void inputfile(ifstream &in,int data[])
{
	for(int i=0;i<5;i++)
	{
		in>>data[i];
	}
}

void outputlist(int data[])
{
	for(int i=0;i<5;i++)
	{
		cout<<data[i]<<endl;
	}
}

void outfile(ofstream &out,int data[])
{
	for(int i=0;i<5;i++)
	{
		out<<(data[i]*data[i])<<endl;
	}
}
