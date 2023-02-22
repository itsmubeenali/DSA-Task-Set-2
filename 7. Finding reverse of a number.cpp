//finding reverse of a number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int number,reverse;
	cout<<" Enter a number you want to reverse   ";
	cin>>number;
	if(number>9)
	{
		while(number!=0)
		{
			reverse=reverse*10+number%10;
			number=number/10;
		}
		cout<<" Reverse number is "<<reverse;
	}
	else
	{
		cout<<" Reverse of a single number is itself i.e  "<<number;
	}
	return(0);
}