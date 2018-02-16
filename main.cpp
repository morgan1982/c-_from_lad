#include <iostream>


using std::cout;
using std::endl;

int var = 20;

int main ()
{
    int var = 10;

    cout << var << endl;
    cout << ::var << endl; //unary scope resolution operator


    return 0;
}
