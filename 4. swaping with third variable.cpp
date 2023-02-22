//swaing with third variable
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{	int a,b,temp;
	cout<<" Enter value in vaiable a  ";
	cin>>a;
	cout<<" Enter value in vaiable b  ";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<" After swaping a ="<<a<<" and b ="<<b;
	return(0);
}