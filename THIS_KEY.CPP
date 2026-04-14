#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class emp
{
	public:
		int id;

		float sal;
		emp(int i,int s)
		{
			this->id=i;
			this->sal=s;
		}
		void display()
		{
			cout<<"id="<<id<<"sal="<<sal;
		}
};

void main()
{
	emp e1(101,20000);
	e1.display();
	getch();
}