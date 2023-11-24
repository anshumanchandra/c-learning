// relational operators
#include<iostream>
using namespace std;


int main (){
    
    int n;
    cin >> n;

    // if (n > 10){
    //     cout << "more than 10" << endl;
    // }
    // else if (n<10){
    //     cout << "less than 10" << endl;
    // }
    // else {
    //     cout << "equal to 10" << endl;
    // }

    if (n%2 == 0 && n%3 == 0){
        cout << "Divisible by both" << endl;
    }
    else if (n%2 == 0){
        cout << "Divisible by 2" << endl;
    }
    else if (n%3 == 0){
        cout << "Divisible by 3" << endl;
    }
    else{
        cout  << "Divisible by none" << endl;
    }

    return 0;
}
