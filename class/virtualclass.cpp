#include<iostream>
#include<conio.h>
using namespace std;
class c1{
public :
void c1fun(){
    cout<<"c1 class function"<<endl;
}
};
class c2: virtual public  c1{
    public :
    void c2fun(){
    cout<<"c2 class function"<<endl;
    }
};
class c3:virtual public  c1{
    public :
    void c3fun(){
    cout<<"c3 class function"<<endl;
    }
};
class c4: public c2,public c3{
    public :
    void c4fun(){
    cout<<"c4 class function"<<endl;
    }
};
int main(){
    c4 obj;
    obj.c1::c1fun();
    obj.c2fun();
    obj.c3fun();
    obj.c4fun();
    getch();
}