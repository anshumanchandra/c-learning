#include <iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"enter the year = ";
cin>>a;
a= a-1900;
b=a/4;
if(a%4==0)
b=b-1;
c=b+a;
d=c%7;
cout<<d;
if (d==0)
cout<<"\nmonday";
else if (d==1)
cout<<"\ntuesday";
else if (d==2)
cout<<"\nwednessday";
else if (d==3)
cout<<"\nthirsday";
else if (d==4)
cout<<"\nfriday";
else if (d==5)
cout<<"\nsaturday";
else if (d==6)
cout<<"\nsunday";
}