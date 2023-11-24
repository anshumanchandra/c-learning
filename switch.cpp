#include<iostream>
using namespace std;

int main(){

    char country_code;
    cout<< "enter the country_code :- ";
    cin>> country_code ;

    // if (country_code == 'a'){
    //     cout << "namaste" << endl;
    // }

    // else if (country_code== 'b' ){
    //     cout << "hello" << endl;
    // }

    // else if (country_code == 'c'){
    //     cout << "hola" << endl ;
    // }

    // else if (country_code == 'd'){
    //     cout << "salut" << endl;
    // }

    // else if (country_code == 'e'){
    //     cout << "ciao" << endl;
    // }

    // else {
    //     cout << "i am still learning" << endl;
    // }
 //*********************************************another way!!!!!!*******************************************//

    switch (country_code){
    case 'a':
        cout << "namaste"<< endl;
        break;
    case 'b':
        cout << "helo"<< endl;
        break;
    case 'c':
        cout << "ciao"<< endl;
        break;
    case 'd':
        cout << "hola"<< endl;
        break;
    case 'e':
        cout << "salut"<< endl;
        break;

    default:
    cout << "i am still learning more ."<< endl;
        
    }


  
    return 0;
}