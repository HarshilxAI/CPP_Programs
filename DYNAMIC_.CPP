//here dynamic binding solved by virtual keyword
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class a
{
public:
	void print()
	{
		display();
	}
       void display()
	{
		cout<<"printing base class"<<endl;
	}
};
class b:public a
{
	 void display()
	{
		cout<<"printing derived class"<<endl;
	}
};







void  main()
{
a a1;
b b1;
clrscr();
a1.print();
b1.print();

getch();
}