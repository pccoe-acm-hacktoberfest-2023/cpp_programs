#include<iostream>
using namespace std;
void passbyref(int &i);
int main(){
    int m;
    cout<<"Enter the number which will passed using referene into user defined function and get incremented by 1 : ";
    cin>>m;
    int &n = m;
    passbyref(m);
    cout<<"Result : "<<m;
    return 0;
}
void passbyref(int &i){
    i = i + 1;
}