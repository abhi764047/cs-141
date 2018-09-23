#include<iostream>
using namespace std;
//write a prog with a function that takes 2 int parameters,finds the maximum as void and takes a third pass by reference parameter then put the sum in that
void func2(int a, int b,int &c){
if(a>b)
   {
   c=a;
   }
else
   c=b;
}
//display of maximum number
int main(){
int a,b,c;
cout<<"Enter 2 numbers: ";
cin>>a>>b;
func2(a,b,c);
cout<<"the number which is maximum : "<<c<<endl;
}
