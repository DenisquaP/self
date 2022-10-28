#include <iostream>
#include <string>
using namespace std;


void print(string s)
{

    cout << s << "\n";

};


bool in(string s, string symbol){
    for (int i = 0; i < s.size(); i++){
        bool flag = false;
        if(symbol == s[i]){ flag = true; return flag;}
    }
};