#include<iostream>
using namespace std;
class Base
{
    protected:
        int j;
    public:
        Base(int y)
        {
            j = y;
            cout<<"Base class constructor called.\n";
        }
        ~Base()
        {
            cout<<"Base class destructor called.\n";
        }
};
class Derived : public Base
{
    int k;
    public:
        //Derived uses x; y is passed along to Base
        Derived(int x, int y): Base(y)
        {
            k = x;
            cout<<"Derived class constructor called.\n";
        }
        ~Derived()
        {
            cout<<"Derived class destructor called.\n";
        }
};
int main()
{
    Derived obj1(5,6);
    return 0;
}