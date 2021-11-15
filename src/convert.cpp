//
// Created by 何耀 on 2021/11/16.
//

#include <iostream>

int stonetolb(int);

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds" << endl;
}

int stonetolb(int sts)
{
    return 14 * sts;
}