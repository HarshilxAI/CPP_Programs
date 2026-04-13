#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class abc
{
	public:
		void fun();
};
void abc::fun()
{
	cout<<"it is a member function of class"<<endl;
}

void main()
{
	abc a1;
	clrscr();
	a1.fun();
	getch();
}
