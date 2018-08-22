//This is a library
#include <iostream>
using namespace std;

int main()
{
float celcius;
cout <<"Enter the temperature in celcius"<<endl ; //Asking for temperature in celcius
cin >> celcius;
float fahrenheit = celcius*1.8+32;    //converting into fahrenheit
cout<<" The given temperature in fahrenheit is: "<< fahrenheit << endl; //Printing the temperature in fahrenheit

return 0;
}

