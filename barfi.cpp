#include<iostream>
using namespace std;

int main(){
    int n,row;
    cin>>n;
    // row=n/2+1;
    for(int i=0;i<n;i++){
        for(int j=n;j>=i;j--)
            cout<<"   ";
            for(int j=0;j<=i;j++)
            cout<<" * ";
            for(int j=0;j<=i-1;j++)
            cout<<" * ";
            cout<<endl;
    }
    for(int i=0;i<n ;i++){
        for(int j=0;j<=i;j++)
            cout<<"   ";
            for(int j=n;j>=0;j--)
            cout<<" * ";
            // for(int j=n;j>=0;j--)
            // cout<<" * ";
            cout<<endl;
    }
}

