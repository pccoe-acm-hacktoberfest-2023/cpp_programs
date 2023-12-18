 #include <iostream>
 #include<conio.h>
using namespace std;
class test {
    int a;
    public :
    //default constructor
    test(){
        a=0;
    }
    void operator ++(){
        ++a;
    }
    void show(){
        cout<<"a :"<<a<<endl;
    }
};
int main(){
    test t;
    t.show(); //display a value before overloading
    ++t;
    t.show(); //display a value after overloading
    return 0;
}