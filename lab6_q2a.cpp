#include<iostream>
using namespace std;
//write a prog with a function that takes 2 int parameter , adds them and returns the sum
int func1(int a, int b){
 int c=a+b;
 return c;
}
//the prog should ask the user for 2 numbers , call the function with numbers as arguments, and tell the sum to the user
int main(){
int a,b,y;
cout<<"Enter 2 numbers: "<<endl;
cin>>a>>b;
y=func1(a,b);//y=f(x)
cout<<"the sum is:"<<y<<endl;
}
