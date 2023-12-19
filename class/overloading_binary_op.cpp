#include<iostream>
#include<conio.h>
using namespace std;
class test{
    int a;
    public :
    void getdata(){
        cin>>a;
    }
    void operator ==(test t2){
        if(a==t2.a){
            cout<<"objects are equal"<<endl;
        }
        else{
             cout<<"objects are not equal"<<endl;
        }
    }
};
int main(){
    test t1,t2;
    cout<<"enter t1 obj value"<<endl;
    t1.getdata();
    cout<<"enter t2 obj value"<<endl;
    t2.getdata();
    t1==t2;
    getch();
}