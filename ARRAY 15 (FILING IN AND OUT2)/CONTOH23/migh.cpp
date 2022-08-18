#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fileOut("DataOut.txt", ios::out | ios::app);
	ifstream fileIn("DataIn.txt");  //THIS WILL TAKE DATA IN FILE DATAIN..!!
	int num1,num2,total;

	fileIn>>num1>>num2;
	total = num1 + num2;
	fileOut<<"Total "<<num1<<"+"<<num2<<":"<<total<<endl;
	cout << "done!";

	fileOut.close();
	fileIn.close();

	system("pause");
	return 0;

}