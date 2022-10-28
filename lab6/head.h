#include <iostream>
using namespace std;

enum class ERRORS {

    NEGATIVE,

    TOOBIG,

    TOOLESS

};
class YearExeptions : public exception {
    ERRORS code;
public:
    YearExeptions(ERRORS code):code(code){}
};


class Sec
{
    int year;
public:
    Sec(int year){this->year = year;}
    void setYear(int year){this->year = year;}
    int getYear(){return year;}

}