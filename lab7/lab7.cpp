#include "header.h"


int main() 
{
    print("-----------------------------------first task--------------------------");
    string s1;
    print("Enter your string");
    cin >> s1;
    print(s1.substr(2, 4));

    print("-------------------------------second task-------------------------");
    if (in(s1, "a")){
    print(to_string(s1.find("o")));
}
    else{
        print("Not in string")
    }

    system("Pause");
}