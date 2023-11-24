//implemnt a simple calculator using switch cases//
#include <iostream>
using namespace std;

int main(){ 
    int n1,n2;
    cout <<"enetr 2 nos :- ";
    cin >> n1 >> n2;

    char op;
    cout << "enter the operators :- ";
    cin >> op;


    switch (op)
    {
        case '+':
        cout << n1+n2 << endl;
        break;
    
    case '-':
        cout << n1-n2 << endl;
        break;

    case '*':
        cout << n1*n2 << endl;
        break;

    case '/':
        cout << n1/n2 << endl;
        break;
    
    default :
    cout<< "enter the another operator.";
    }



    return 0;
}