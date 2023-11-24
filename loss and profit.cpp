#include <iostream>
using namespace std;

int main()
{ 
    int op,sp;
    cout<<"enter the original price = ";
    cin>>op;
    cout<<"enter thr selling price = ";
    cin>>sp;
    if (op>sp)
        cout<<"its loss"<<op-sp;
else
{
    cout<<"its profit by = "<<sp-op<<"ruppee";
}

     }