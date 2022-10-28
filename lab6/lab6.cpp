#include "head.h"


int main(){
    cout << "---------------123--------------------\n";
    int num;
    int year;
    cout << "Enter the number from 1 to 3: " << endl;
    cin >> num;
    try{
        if(num == 1){cout << "One" << endl;}
        else if(num == 2) {cout << "Two" << endl;}
        else if (num == 3) {cout << "Three" << endl;}
        else {throw ("Uncorrect number");}
    }
    catch(const char* msg){
        cout << msg << endl;
        
    }
    cout << "-----------------Year---------------\n";
    cin >> year;
    try{
        Sec fi = {year};
    }
    catch()



    system("Pause");

}