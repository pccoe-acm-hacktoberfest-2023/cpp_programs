#include <iostream>
using namespace std;
int main()
{
    int no1, no2, max;
    cout << "Enter 2 nos\n";
    cin >> no1 >> no2;
    if (no1 > no2)
    {
        cout << "Max = " << no1;
    }
    else
    {
        cout << "Max = " << no2;
    }
    // can also written as
    //  max=(no1>no2)?no1:no2;
    // cout<<"Max = "<<max;
    return 0;
}