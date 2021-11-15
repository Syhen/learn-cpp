//
// Created by 何耀 on 2021/11/15.
//

#include <iostream>
#include <typeinfo>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "first line";
    cout << endl;
    cout << "You won't regret it!" << endl;
    // 我的理解：cout << "str" 会返回一个cout对象，所以可以紧接着 << endl
    cout << "type of out stream is: " << typeid(cout).name() << endl;
    cout << "type of out stream is: " << typeid(cout << "").name() << endl;
//    cout << "Press any key to continue...";
//    cin.get();
    return 0;
}
