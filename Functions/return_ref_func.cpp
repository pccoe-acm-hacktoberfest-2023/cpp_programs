#include <iostream>
using namespace std;
int &returnref(int &, int &);
int main()
{
    int a = 2, b = 1;
    cout << a <<" "<< b <<" "<< returnref(a, b)<<endl;
    returnref(a, b) = 5;
    cout << a <<" "<< b <<" "<< returnref(a, b)<<endl;
    return 0;
}
int &returnref(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}