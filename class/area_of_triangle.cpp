#include<iostream>
#include<conio.h>
using namespace std;
class triangle{
    float base,height,area;
    public:
    triangle(){
        cout<<"enter base"<<endl;
        cin>>base;
        cout<<"enter height"<<endl;
        cin>>height;

    }
    void cal_area_triangle(){
        area=0.5*base*height;
    }
    void show_area_triangle(){
        cout<<"area of triangle is"<<area<<endl;
    }
};
int main(){
    triangle t;
    t.cal_area_triangle();
    t.show_area_triangle();
    getch();
}