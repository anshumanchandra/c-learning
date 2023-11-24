# include <iostream>  //p processing command
using namespace std;
int main()  //main function, vo function jo sbse pehle execute hoga
{
//     cout<<"hello world";  //printing command
//     return 0;

// ___________________________________taking input from user_____________________________________________

int a,b,c;
cout<< "enter the first no:- ";
cin>> a;
cout<< "enter the second no:- ";
cin>> b;
    c=a;
    a=b;
    b=c;
cout<< "the value of a:- "<<a<<endl<<"the value of b:- "<<b;

return 0;
}