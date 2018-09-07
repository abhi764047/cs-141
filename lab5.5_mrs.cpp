//Write a C++ program to print the mirror rhombus star pattern
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<< " number of stars "<<endl;
  cin>>n;
  //print stars as mirror shaped
  //assign condition
    for(int i=0; i<n; i++)
    {
      //print gaps
        for(int j=0; j<i; j++)
        {
            cout << " ";   
        }
        //print stars
        for(int j=0; j<n; j++)
        {
            cout << "*";   
        }
       cout <<endl;   
    }
    return 0;
}

