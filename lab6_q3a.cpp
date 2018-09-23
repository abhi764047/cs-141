#include<iostream>
using namespace std;
//write a prog with a function that takes 2 int parameters,finds the maximum,returns the maximum
int func1(int a, int b){
if(a>b){
 return a;
  }
else 
  return b;
}
//the prog should ask the user for 2 numbers ,then call the function with the numbers as arguments and tell the user the maximum
int main(){
int a,b,y;
cout<<"Enter 2 numbers: ";
cin>>a>>b;
y = func1(a,b);
cout<<"the number which is maximum:"<<y<<endl;
}
