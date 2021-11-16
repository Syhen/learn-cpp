//
// Created by 何耀 on 2021/11/16.
//
#include <iostream>

using namespace std;

int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    // dec hex oct
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;
}
