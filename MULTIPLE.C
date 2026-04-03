#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class A
{
	protected:
		int a;
	public:
		void get_a(int n)
		{
			a=n;
		}
};
class B
{
	protected:
		int b;
	public:
		void get_b(int n)
		{
			b=n;
		}
};
class C:public A,public B
{
	public:
		void display()
		{
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
		}
};

void main()
{
	C c;
	c.get_a(10);
	c.get_b(20);
	c.display();
	getch();
}