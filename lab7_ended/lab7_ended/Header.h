#pragma once
#include <iostream>
#include <string>
#include <sstream>
#define _USE_MATH_DEFINES
#define PI 3.141592653589793
#include <fstream>
#include <stdio.h>
#include <io.h>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <regex>

using namespace std;

void print_vector(vector<float> v)

{

    for (int n : v) cout << n << " ";

    std::cout << "\n-------------\n";

}

bool verify_name(string name) {
    regex reg("[A-Z][a-z]");
    return regex_search(name, reg);
}

void verify_email(string str) {
    regex reg("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}\\b");
    if (regex_search(str, reg)) {
        cout << str << endl;
    }
}

class Settings {
public:
    static map<string, int> self_map;

    static void add(string key, int value) {
        self_map[key] = value;
    }

    static int get(string key) {
        return self_map[key];
    }

    static void print() {
        map<string, int>::iterator it = self_map.begin();
        for (auto i = self_map.begin(); i != self_map.end(); i++) {

            cout << i->first << " = " << i->second << "\n";

        }
    }
};