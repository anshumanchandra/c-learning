#include <iostream>
using namespace std;
int main()
{
    long a,b,c,d,e,n,w,rev;
    cout<<"enter five digit no : "<<endl;
    cin>>w;
    n=w;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    rev=(e*1+d*10+c*100+b*1000+a*10000);
    cout<<"reverse of the no is : "<<rev;
    if (w==rev)
    cout<<"both the nos are equal";
    else 
    cout<<"they are not equal";
    return 0;
}


    
    


