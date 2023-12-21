#include<iostream>
using namespace std;
class base
{
    protected: int i,j;
    public:
        void set(int a,int b)
        {
            i = a;
            j = b;
        }
        void show()
        {
            cout<<i<<" "<<j<<endl;
        }
};
class derived: public base
{
    int k;
    public:
        void setk()
        {
            k = i * j;
        }
        void showk()
        {
            cout<<k<<endl;
        }
};
int main()
{
    derived obj;
    obj.set(2,3);
    obj.show();
    obj.setk();
    obj.showk();
    return 0;
}