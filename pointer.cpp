#include <iostream>
using namespace std;

int main()
{
//what is pointer??
//it is a data type which store the address of other data type

int a= 3;
int*b = &a;
cout<<"the address of a is"<<&a<<endl;
cout<<"the address of a is"<<b<<endl;
//  & -----> (adress of operator)
//  * -----> dereference operator
    return 0;
}