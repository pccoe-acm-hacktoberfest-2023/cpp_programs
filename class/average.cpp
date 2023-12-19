#include<iostream>
#include<conio.h>
using namespace std;
class average{
    float a,b,c,avg;
    public:
    average(){
        cout<<"enter numbers"<<endl;
        cin>>a >>b >>c;
    }
    void cal_average(){
        avg=(a+b+c)/3.0;
    }
    void show_average(){
        cout<<"average is"<<avg;
    }

};
int main(){
    average a;
    a.cal_average();
    a.show_average();
    getch();
}