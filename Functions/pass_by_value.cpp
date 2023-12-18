#include<iostream>
using namespace std;
int passbyvalue(int);
int main(){
    int m; 
    cout<<"Enter the Number to pass in the function which will increment the value by 1: ";
    cin>>m;
    cout<<"Result : "<< passbyvalue(m);
    return 0;
}
int passbyvalue(int i){
    i = i + 1;
    return i;
}