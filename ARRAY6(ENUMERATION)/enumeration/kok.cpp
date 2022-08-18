#include <iostream>
using namespace std;
const int ROWS = 6;
const int COLS = 5;
void main()
{
   
   enum carType {proton, produa}; 
   carType car; 
   enum colorType {white, red}; 
   colorType color; 
   double inStock[car][color];
   for (car=proton; car<=produa; car=static_cast<carType>(car+1)) 
   { 
   
	for (color=white; color<=red; color=static_cast<colorType>(color+1)) 
    cin >> inStock[car][color] << "\t "; 

   } 

system("pause");
} 
