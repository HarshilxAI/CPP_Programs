// it have no scope
//it can not be call by object
//work like as normal function
//cant access member names directly
//it can be either declare int private or public part
#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class box
{
	private:
		int length;
	public:
		box(int n)
		{
			length=n;
		}
		friend int print_len(box);

};
int print_len(box b)
{
	b.length=b.length+20;
	return b.length;
}
void main()
{
	box b1(10);
	clrscr();

	cout<<"length of box"<<print_len(b1)<<endl;
	getch();
}


