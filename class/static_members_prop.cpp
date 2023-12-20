#include<iostream>
using namespace std;
class ABC
{
    private: static int data;
    public: static void getdata()
    {
        ++data;
        cout<<"count is: "<<data<<endl;
    }
    void putdata()
    {
        ++data;
        cout<<"Now count is: "<<data;
    }

};
int ABC::data=5;
int main(){
    ABC obj;
    ABC::getdata();
    obj.putdata();
    return 0;
}