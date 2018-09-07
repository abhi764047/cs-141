//Write a C++ program to print the square star pattern with symbol *.
#include<iostream>
using namespace std;

int main()
{
    
    //declaring variables
    //print square pattern with * symbol by using for loop
    int i,j,n ;
    cout << " Print a square pattern with * character: " ;
    cin >>n;
    for (int i = 0; i <= n; i++) 
    {
        for (int j = 0; j <= n; j++) 
        {
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}
