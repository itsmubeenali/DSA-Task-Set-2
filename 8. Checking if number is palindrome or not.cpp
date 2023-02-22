//finding reverse of a number and checking number is palindome or not
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int number,reverse;
	cout<<" Enter a number you want to reverse   ";
	cin>>number;
	int number1=number;
	if(number>9)
	{
		while(number!=0)
		{
			reverse=reverse*10+number%10;
			number=number/10;
		}
		cout<<" Revese "<<reverse<<endl;
		if(reverse==number1)
		{
			cout<<" Number is palindrome  ";
		}
		else
		{
			cout<<" Number is not palindrome";
		}
	}
	else
	{
		cout<<" Single Digit Number is awlays Palindrome "<<number;
	}
	return(0);
}