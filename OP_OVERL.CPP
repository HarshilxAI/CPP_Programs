//perform operation on user define datatype
//::,sizeOf,member(.),*,?:  it cant overload
//returntype classname::operator op(arglist){}
#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class testing
{
	private:
		int n;
	public:
	       testing()
	       {
	       n=8;
	       }
	       void operator ++()
	       {
	       n=n+2;
	       }
	       void operator --()
	       {
	       n=n-2;
	       }
	       void display()
	       {
		cout<<"value of n after op overload="<<n<<endl;

		}
		void print()
	       {

		cout<<"after -- operator overlod="<<n<<endl;
		}
};
void main()
{
	testing t1,t2;
	clrscr();
	++t1;
	--t2;
	t1.display();
	t2.print();
getch();
}