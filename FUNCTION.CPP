#include<iostream.h>
#include<conio.h>
int primeornot(int n);
int main()
{
clrscr();
int n,i,flag=0;
cout<<"Enter a number: ";
cin>>n;
for(i=2;i<=n/2;i++)
{
if(primeornot(i))
{
if(primeornot(n-i))
{
cout<<n<<" = "<<i<<" + "<<n-i<<endl;
flag=1;
}
}
}
if(!flag)
{
cout<<n<<"The number entered cannot be expressed as sumof two prime numbers.";
}
getch();
return 0;
}
int primeornot(int n)
{
int i,prime=1;
if(n==0||n==1)
{
prime=0;
}
else
{
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
prime=0;
break;
}
}
}
return prime;
}