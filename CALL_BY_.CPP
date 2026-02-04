#include<stdio.h>
#include<conio.h>
#include<iostream.h>
 void swap(int *x,int *y)
 {
 int t;
 t=*x;
*x=*y;
*y=t;

 }

void main()
{
	int x=10,y=20;
	clrscr();
	swap(&x,&y);
	cout<<"value of x="<<x<<endl;
	cout<<"value of y="<<y<<endl;
	getch();
}