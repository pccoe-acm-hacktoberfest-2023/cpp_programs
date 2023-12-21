#include <iostream>
using namespace std;
class base
{
    int i, j;

public:
    void set(int a, int b)
    {
        i = a;
        j = b;
    }
    void show()
    {
        cout << i << " " << j << endl;
    }
};
class derived : private base
{
    int k;

public:
    derived(int x)
    {
        k = x;
    }
    void showk()
    {
        cout << k << endl;
    }
};

int main()
{
    derived obj(3);
    //obj.set(1,2);
    //obj.show();
    return 0;
}
