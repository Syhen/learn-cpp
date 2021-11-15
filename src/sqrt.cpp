//
// Created by 何耀 on 2021/11/16.
//

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    cout << "Enter the area: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    return 0;
}