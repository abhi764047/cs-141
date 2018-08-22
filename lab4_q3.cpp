//This is a library
#include<iostream>
using namespace std;

int main()
{
float fahrenheit;
cout <<"Enter the temperature in fahrenheit"<<endl ; //Asking for temperature in fahrenheit
cin >> fahrenheit;
float celcius=(fahrenheit-32)/1.8;        //converting into celcius
cout<<"The given temperature in celcius is" << celcius << endl; //Printing the temperature in celcius

return 0;
}
