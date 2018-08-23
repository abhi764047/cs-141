#include<iostream>
using namespace std;
int main(){
//declaration of variables
float b;
float c;
//ask for variables
cout<<"enter first angle =";
cin>>b;
cout<<"enter second angle =";
cin>>c;
//calculation
float a=180-(b+c);
//showing result
cout<<"the third angle is "<<a<<"degrees";
//returning an integer
return 0;
}
