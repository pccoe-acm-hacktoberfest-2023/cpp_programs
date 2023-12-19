#include<iostream>
using namespace std;
class  ABC{
    public : int i;
    void display(){
        cout<<"Invoking member function through object";
    }
};
int main(){
    ABC obj; //instance of a class
    obj.i=5; //accessing data member via instance
    cout<<obj.i<<endl;
    obj.display(); //accessing member function via instance
    return 0;
}