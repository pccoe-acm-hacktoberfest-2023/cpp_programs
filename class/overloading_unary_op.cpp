#include<iostream>
using namespace std;
class count{
    private :
    int a;
    public :
    // default constructor
    count(){
        a=5;
    }
    void operator ++ (){
        ++a;
    }
    void display(){
        cout<<"a :"<<a<<endl;
    }
};
int main(){
    count c;
    ++c;    //call the "void op ++" function
    c.display();
    return 0;
}