#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class shape
{
	public:
		int a,b;
		void getdata(int n,int m)
		{
			a=n;
			b=m;
		}
};
class rect:public shape
{
	public:
		int rect_area()
		{
			int result;
			result=a*b;
			return result;
		}
};
class triangle:public shape
{
	public:
		int triangle_area()
		{
			float r;
			r=0.5*(a*b);
			return r;
		}
};
void main()
{
	rect r1;
	triangle t1;
	int x;
	float y;
	clrscr();
	r1.getdata(1,1);
	x=r1.rect_area();
	t1.getdata(2,5);
	y=t1.triangle_area();
	cout<<"area of rectangle="<<x<<endl;
	cout<<"area of triangle="<<y<<endl;
	getch();
}
