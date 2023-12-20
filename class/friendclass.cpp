#include<iostream>
using namespace std;
class test_t1{
    int a,b; //private
    public :
    friend class test_t2;
    void getab(){
        cout<<"enter a & b"<<endl;
        cin>>a>>b;
    }
};
class test_t2{
    public :
    void putab(test_t1 t1){
        cout<<"a :"<<t1.a<<endl;
        cout<<"b :"<<t1.b<<endl;
    }
};
int main(){
    test_t1 t1;
    test_t2 t2;
    t1.getab();
    t2.putab(t1);
    return 0;
}