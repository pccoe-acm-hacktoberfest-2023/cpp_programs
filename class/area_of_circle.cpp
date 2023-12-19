#include<iostream>
#include<conio.h>
using namespace std;
class circle{
    float r,area;
    public :
    circle(){
        cout<<"enter radius of circle"<<endl;
        cin>>r;
    }
    void cal_area_circle(){
        area=3.14*r*r;
    }
     void show_area_circle(){
        cout<<"area of circle is"<<area;
    }
};
int main(){
    circle c;
    c.cal_area_circle();
    c.show_area_circle();
    getch();
}