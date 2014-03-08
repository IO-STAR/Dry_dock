/*Abdirahman Ahemed Osman
3.16.14
*/



#include<iostream>
#include<iomanip>
#include<Windows.h>
using namespace std;

int main()
{

	int Q;
	double x,y,n,k,h,t,l,e,m ;
	m=1;
	n=20;
	x=0;
	k=0;
	h=1;
	e=1;

	while(k<=5)
	{
		cout
		  << "Options"
	<<"\n"<< "***********************************"
	<<"\n"<< "1. Enter a positive real number, X"
	<<"\n"<< "2. Factorial of x  "
    <<"\n"<< "3. Fourth root of x"
	<<"\n"<< "4. X-ponential of x (exp(x))"
    <<"\n"<< "5. Quit"
	<<"\n";
	cin>>Q;
	system("cls");
	
		switch (Q)
		{
		
		case 1:
			cout<<"Enter a positive real number, X: ";
			cin>>x;
			break;
		case 2:
			if(x== 0)
				{
					cout<<"you must enter a valid number for X"<<"\n\n"<<"\n";
				}
			else
				{
					for(y=1;y<=x;y++)
					{
						h*=y;
						system("cls");
					}
				}
			if(x>0)
				cout<<defaultfloat<<x<<"!= "<<setw(10)<<fixed<<setprecision(2)<<h<<"\n\n";
			h=1;
			break;
		case 3:
			if(x==0)
				{cout<<"you must enter a valid number for X"<<"\n\n";
				}
			else
				{
					for(t=1;t<=6;t++)
					{
						
						l=(3*n+x/pow(n,3))/4;
						n=l;
					}
					cout<<defaultfloat<<setw(4)<<fixed<<setprecision(2)<<l<<"\n\n";
				}
			n=20;
			break;
		case 4:
			if(x== 0)
				{cout<<"you must enter a valid number for X"<<"\n\n";

				}
			else
			{
				for(t=1;t<=6;t++)
				{
					e+=pow(x,t)/m;
					m*=t+1;
				}
			}
			cout<<defaultfloat<<setw(6)<<fixed<<setprecision(4)<<e<<"\n\n";
			m=1;
			e=1;
			break;
		case 5:
			cout<<"See you later";
			Sleep(3*100);
			cout<<"."<<"";
			Sleep(3*100);
			cout<<".";
			Sleep(3*100);
			cout<<".";
			Sleep(5*100);
			cout<<"FOREVA!!!!!"<<"\n\n\n\n\n\n";
		k+=500;
			break;
	}
	}
	system("pause");
	return 0;
	}