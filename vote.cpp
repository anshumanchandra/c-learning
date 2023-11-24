#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if (age>=18){
        cout<<"you can vote";
    }
    else if(age>101)
    {
        cout<<"invalid age";
    } 
    else{
        cout<<"you cannot vote";
    }

}
