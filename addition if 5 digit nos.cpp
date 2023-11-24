# include <iostream>  
using namespace std;
int main()  
{
    long n,a,b,c,d,e,sum;
    cout<<"enter the 5 digit no:- ";
    cin>>n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    sum = a+b+c+d+e;
    cout<<sum;




return 0;
}