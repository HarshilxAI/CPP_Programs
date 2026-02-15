#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class distance
{	private:
		int feet;
		float inch;
	public:
		distance()
		{
		feet=2;
		inch=7.0;
		}
		void display()
		{
		cout<<"feet="<<feet<<endl;
		cout<<"inch="<<inch<<endl;
		}

};
void main()
{
	distance d1;
	clrscr();
	d1.display();
	getch();

}

