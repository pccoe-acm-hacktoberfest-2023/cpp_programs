#include<iostream>
using namespace std;
class base1
{
    public:
        void show()
        {
            cout<<"class base1";
        }
};
class base2
{
    public:
        void show()
        {
            cout<<"class base2";
        }
};
class derived:public base1,public base2
{

};
int main()
{
    derived obj;
   // obj.show();
    obj.base2::show(); //function from base2 class
    return 0;
}