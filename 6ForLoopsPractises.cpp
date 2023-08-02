﻿#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{

    cout << "Please enter a number as a factorial : " ;
    int n;
    unsigned long long int result = 1; // this int version allows us to use numbers with more than 64 bits of data
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    cout << "Result : "<< result;

    return 0;
}
