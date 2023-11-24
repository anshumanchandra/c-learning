#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter the two nos: ";
    cin>>a>>b;
    char op;
    cout<<"enter the operator";
    cin>>op;
    switch (op){
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;

    }
    return 0;
    
}