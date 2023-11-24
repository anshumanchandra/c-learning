#include <iostream>
using namespace std;
main()
{
    char a;
    int asc;
    cout<<"enter any alphabet from a-z : ";
    cin>>a;
    cout<<a<<endl;
    asc=a;
    cout<<asc;
    if (asc>65&&asc<90)
    cout<<a<<"is a cappital letter";
    else if(asc>97&&asc<122)
    cout<<a<<"is a small letter";
    else if (asc>48&&asc<57)
    cout<<a<<"is a numeric character"; 
    return 0;


}