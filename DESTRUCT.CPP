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
		cout<<"\n constructor";
		}
		~sample()
		{
		cout<<"\n destructor";
		}
};
void main()
{
	sample s1,s2;

	getch();
}