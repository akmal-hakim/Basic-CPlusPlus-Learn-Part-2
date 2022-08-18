#include <iostream>
#include <fstream>    //INDLUCE FSTREAM HEADER
using namespace std;

int main()
{
	int num;
	ofstream output;  //2. DECKARE FILE STREAM VARIABLESS:
	output.open("contoh.txt", ios ::out | ios ::app);  //NAMA FILE ELAKKAN ADA SPACE JGN !!
	  //3. INPUT/OUTPUT SOURCES

	output <<"My name is Mr.L";  //4. OUPUT FUNCTION
     //5. CLOSE THE FILES:

	output<<endl;

	for ( int i = 1; i <= 5; i++)
	{
		cout<<"Num "<<i<<" :";
		cin>>num;
		output<<num<<" ";
	}
	output<<endl;
	output.close();
	cout << "Done" <<endl;


	system("pause");
	return 0;
}

//YOU CAN FIND THE OUTPUT AT THE FILE FILLING
