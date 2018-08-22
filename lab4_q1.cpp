//This is library
#include <iostream>
using namespace std;
int main()
{
double cm;       //Declaring a variable

double m;
double km;
cout << "Enter the length in cm "<<endl; //Asking for length in cm
cin >> cm;
 m=cm/100;
 km=cm/100000;       // Converting into m and km
cout<<"The lengthin metre is : "<< m <<endl ;
cout<<"The length in kilometre is : "<< km  << endl; //Printing the length in m and km

return 0 ;
}

