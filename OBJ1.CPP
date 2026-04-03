#include<iostream.h>
#include<stdio.h>
#include<conio.h>

 class student
 {
	public:
		int id;
		float sal;
	       char n;
};

void main()
{
	student s1;
	clrscr();
	s1.id=201;
	s1.sal=23500.00;
	s1.n='d';
	cout<<s1.id<<endl;
	cout<<s1.sal<<endl;
       cout<<s1.n<<endl;
	getch();
	}
