#include<iostream>
using namespace std;
//write a prog with a function that takes 2 int parameter , adds them as void,takes a 3rd variable passed by reference and puts the sum in that
void func2(int a, int b,int &c){
c=a+b;
}
//the prog should ask the user for 2 numbers , call the function with numbers as arguments, and tell the sum to the user
int main(){
int a,b,c;
cout<<"Enter 2 numbers: "<<endl;
cin>>a>>b;
func2(a,b,c);
cout<<"the sum is:"<<c<<endl;
}
