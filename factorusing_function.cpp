#include<iostream>
using namespace std;
int factorial(int a){
int b=1;
for (int i=1;i<=a;i++){
        b=i*b;
    }
    return b;
}

int main(){

   int a;
    cin>>a;

cout<<factorial(a);
    return 0;
}