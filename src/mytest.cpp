//
// Created by 何耀 on 2021/11/16.
//

#include <iostream>

/*
 * for clang++
 * one bit for sign
 * short 16bits(位)
 * int 32bits
 * long 64bits
 * long long 64bits
 */
int main()
{
    using namespace std;
    unsigned long long num;
    cin >> num;
    cout << "My input is a " << typeid(num).name();
    cout << ". It's value is: " << num << endl;

    cout << "size of short: " << sizeof (short) << endl;
    cout << "size of int: " << sizeof (int) << endl;
    cout << "size of long: " << sizeof (long) << endl;
    cout << "size of long long: " << sizeof (long long) << endl;

    cout << "max int: " << INT_MAX << endl;
    cout << "char bit: " << CHAR_BIT << endl;
    return 0;
}