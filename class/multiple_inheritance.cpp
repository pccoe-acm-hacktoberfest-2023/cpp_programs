#include<iostream>
#include<conio.h>
using namespace std;
class stu{
    int id;
    char name[20];
    public :
    void getstu(){
        cout<<"enter stuid,stuname";
        cin>>id>>name;
    }
    void putstu(){
        cout<<"id :"<<id<<endl;
        cout<<"name :"<<name<<endl;
    }
};
class marks{
    protected:
    int m1,m2,m3;
    public :
    void getdata(){
        cout<<"enter sub marks"<<endl;
        cin>>m1 >>m2 >>m3;
    }
    void putdata(){
        cout<<"m1 "<<m1<<endl;
        cout<<"m2 "<<m2<<endl;
        cout<<"m3 "<<m3<<endl;
    }
};
class result : public stu,public marks{
    int total;
    float avg;
    public :
    void show(){
        total=m1+m2+m3;
        avg=total/3.0;
        cout<<"total :"<<total<<endl;
        cout<<"average :"<<avg<<endl;
    }
};
int main(){
    result r;
    r.getstu();
    r.getdata();
    r.putstu();
    r.putdata();
    r.show();
    return 0;
}