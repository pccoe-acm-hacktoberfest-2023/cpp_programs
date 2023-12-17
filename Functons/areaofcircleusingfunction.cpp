
#include<iostream>
using namespace std;
double area(double);
int main(){
    double r, a; 
    cout<<"Enter Radius";
    cin>>r;
    a = area(r);
    cout<<"Area : "<<a;
    return 0;
}
double area(double r){
    double a;
    a = 3.14*r*r;
    return a;
}