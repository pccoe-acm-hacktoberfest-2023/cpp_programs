#include<iostream>
using namespace std;
class ABC
{

public:
    int data;
    void getdata(){ //Definition is inside the class
        cout<<"Enter number : ";
        cin>>data;
    }
    void putdata();
};

void ABC::putdata(){
    cout<<"Entered number is : "<<data;
}
int main(){
    ABC obj;
    obj.getdata();
    obj.putdata();
    return 0;
}