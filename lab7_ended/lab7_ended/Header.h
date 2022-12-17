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
#include <vector>

using namespace std;

void print_vector(vector<float> v)

{

    for (int n : v) cout << n << " ";

    std::cout << "\n-------------\n";

}
