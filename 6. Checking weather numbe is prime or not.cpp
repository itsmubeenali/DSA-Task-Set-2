//finding wheather number is prime or not
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 	int number,i;
	cout<<" \t Checking Prime Number"<<endl;
	cout<<" Enter a number you want to check  ";
	cin>>number;
	for(i=2;i<=number/2;i++)
	{
		if(number%i==0)
		{
			cout<<" Not a prime number ";
			exit(0);
		}
	}
	cout<<" You`ve entered a prime number \n";
	cout<<12345%10;
	
}