/*
	polymorphism= compiletime and runtime
	compiletime=func_overload and operator_overload
	runtime=virtual function

*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int sum(int,int);
float sum(float,float);
void main()
{
	int c;
	float z;
	clrscr();
	c=sum(2,3);
	z=sum(2.5f,3.5f);
	cout<<"int sum="<<c<<endl;
	cout<<"float sum="<<z;
	getch();
}
int sum(int a,int b)
{
	return a+b;

}
float sum(float x,float y)
{

	return x+y;

}