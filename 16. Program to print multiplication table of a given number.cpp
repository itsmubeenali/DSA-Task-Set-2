

//Write C++ program to print multiplication table of a given number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number To Find Multiplication table =  ";
    cin >> n;
    for (int i= 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}