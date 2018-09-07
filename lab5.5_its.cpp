//Write a C++ program to print the inverted triangle star pattern with symbol '*'
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<< "enter the number of stars at top" <<endl;
   cin>>n;
   //print stars 
   //assign condition
  for(int i=n;i>0;i--)
  { 
     //print stars
     for(int j=0;j<i;j++)
     {
     cout<<"*";
     }
  cout<<endl;
  }
return 0;
}
