#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class account
{
	public:
		int  salary;
};
class programmer:public account
{
	public:
		int bonus;
};
void main()
{
	programmer p1;
	clrscr();
	p1.salary=6000;
	p1.bonus=1000;
	cout<<"salary="<<p1.salary<<endl;
	cout<<"bonus="<<p1.bonus<<endl;
	getch();
}

