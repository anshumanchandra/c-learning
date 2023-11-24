#include<iostream>
using namespace std;

int prime(int n){
    
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        {
        return 0;
        }
            if(i==n-1)
            return 1;
        }
}
int main()
{
    int num,a;
    cin>>num;
    a=prime(num);
    if (a==0)
    cout<<"not prime";
    else
    cout<<"it is prime";
    return 0;
}