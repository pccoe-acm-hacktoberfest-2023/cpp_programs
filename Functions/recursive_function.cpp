#include<iostream>
using namespace std;
int factorial (int n);
int main(){
    int m,fact;
    cout<<"Enter number: ";
    cin>>m;
    fact = factorial(m);
    cout<<"Factorial : "<<fact;
    return 0;
}
int factorial(int n){
    int fact =1;
    if(n ==1){
        return 1;
    }else{
        fact = factorial(n-1)*n;
        return fact;
    }
}