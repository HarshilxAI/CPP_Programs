#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class college
{
	public:
		void cname()
		{
			cout<<"iiht center"<<endl;
		}
};
class stream:public college
{
	public:
		void field()
		{
			cout<<"B.C.A"<<endl;
		}
};
class subject:public stream
{
	public:
		void sub()
		{
			cout<<"JAVA"<<endl;
		}
} ;

void main()
{
	subject s1;
	clrscr();
	s1.cname();
	s1.field();
	s1.sub();
	getch();
}