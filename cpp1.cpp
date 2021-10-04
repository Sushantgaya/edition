#include<iostream>
using namespace std;

void menu()
{
	cout<<"\n\t\t Main Menu ";
	cout<<"\n\t 1. Addition";
	cout<<"\n\t 2. Substraction";
	cout<<"\n\t 3. Product";
	cout<<"\n\t 4. Quotient";
	cout<<"\n\t 5. Remainder";
	cout<<"\n\t 6. Exit";
	cout<<"\n\t Please enter your choice (1-6):";
}

float sum(float x, float y)
{
	return(x+y);
}

float diff(float x, float y)
{
	return(x-y);
}

float prod(float x, float y)
{
	return(x*y);
}

float quot(float x, float y)
{
	return(x/y);
}

int rem(float x, float y)
{
	return((int)x%(int)y);
}

int main()
{
	float a, b;
	int ch;
	cout<<"\n Enter a number :";
	cin>>a;
	cout<<"\n Enter a number :";
	cin>>b;
	do
	{
		do
		{
			menu();
			cin>>ch;
			if((ch<1)||(ch>6))
			{
				cout<<"\n Invalid choice ... Try Again";
				continue;
			}
			else
				break;
		}while(1);
		
		switch(ch)
		{
			case 1:
				cout<<"\n Sum :"<<sum(a,b);
				break;
			case 2:
				cout<<"\n Difference :"<<diff(a,b);
				break;
			case 3:
				cout<<"\n Product :"<<prod(a,b);
				break;
			case 4:
				cout<<"\n Quotient :"<<quot(a,b);
				break;
			case 5:
				cout<<"\n Remainder :"<<rem(a,b);
				break;
		}
	}while(ch<6);
}
