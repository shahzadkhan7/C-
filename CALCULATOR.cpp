#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a,b,result;
	char op;
	cout<<"Enter 1st number :";
	cin>>a;
	cout<<"Enter the operations [+, -, *, /]"<<endl;
	cin>>op;
	cout<<"Enter second number :";
	cin>>b;
	if(op=='+')
	{
		result=a+b;
	}
	     else if(op=='-')
	     {
	     	result=a-b;
		 }
		         else if(op=='*')
		         {
		         	result=a*b;
				 }
				        else if(op=='/')
				        {
				        	result=a/b;
						}
						      cout<<a<<op<<b<<"="<<result;
						      
		getch();
		return 0;				      
}
	
