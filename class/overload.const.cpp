#include<iostream>
using namespace std;
class ABC
{
    int width,height;
    public: 
    ABC();
    ABC(int,int);
    int area(){
        return(height*width);
    }
};
ABC::ABC() //default constructor
{
    width = 5;
    height = 5;
}
ABC::ABC(int a,int b) //parametrised constructor
{
    width =a;
    height =b;
}
int main(){
    ABC obj1 (3,4);
    ABC obj2;
    cout<<"Obj1's area : "<<obj1.area()<<endl;
    cout<<"Obj2's area : "<<obj2.area()<<endl;
    return 0;
}