#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class sample
{
	private:
		int x;
	public:
		sample()
		{
		 x=20;
		}
		void f()
		{
			x=x+1;
		}
		sample(sample& s)
		{
			x=s.x;
		}
		void display()
		{
		cout<<x<<endl;
		}

};
void main()
{
	sample s1;
	clrscr();
	for(int i=0;i<5;i++)
	{
		s1.f();
	}
	s1.display();
	sample s2(s1);
	s2.display();
	getch();

}

