#include<iostream>
using namespace std;
class ABC{
    private: int number;
    protected: int data;
    public: void getdata(){
        cout <<"Enter first number : ";
        cin>>number;
        cout<<"Enter second nummer : ";
        cin>>data;
    }
    void putdata(){
        cout<<"First number is "<<number<<endl;
        cout<<"Second number is "<<data;
    }
};
int main(){
    ABC obj;
    obj.getdata();
    obj.putdata();
    return 0;
}