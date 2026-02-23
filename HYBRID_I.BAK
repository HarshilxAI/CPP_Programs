#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class A
{
	protected:
		int a;
	public:
		void get_a()
		{
			cout<<"enter value of a";
			cin>>a;

		}
};
class B:public A
{
	protected:
		int b;
	public:
		void get_b()
		{
		    cout<<"enter value of b";
		    cin>>b;
		}
};
class C
{
	protected:
		int c;
	public:
		void get_c()
		{
		cout<<"enter value of c";
		cin>>c;
		}
};

class D:public B,public C
{
	protected:
		int  d;
	public:
		void mul()
		{
		       get_a();
			get_b();
			get_c();
			cout<<"multiplication="<<a*b*c<<endl;
	       }
};

void main()
{
	D d1;
	clrscr();
	d1.mul();
	getch();
}