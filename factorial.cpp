#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int n, i, fact=1;

    cout<<"Enter the Number: ";
    cin>>n;

    for(i=n; i>=1; i--)
    {
        fact = fact*i;
      }
    cout<<"\nFactorial = "<<fact;
    cout<<endl;
    return 0;
}