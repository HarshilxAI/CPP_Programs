#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int a=5,b=3;
     float c;

    c=a/b;
  cout<<"before type casting<<c;
  c=float(a)/float(b);
cout<<"after type casting<<c;
	getch();
}