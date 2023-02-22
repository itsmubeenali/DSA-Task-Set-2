//finding factorial of a number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int factorial=1,i,number;
	cout<<" Enter a number to find its factorial  ";
	cin>>number;
	for(i=number;i>0;i--)
	{
	 	factorial=factorial*i;
	}
	cout<<" Factorial of number is  "<<factorial;
	return(0);
	 
}