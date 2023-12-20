#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;
    else{
        return (n*factorial(n-1));
    }
}
int main(){
    int num ,fact;
    cout<<"enter number to get factorial of:"<<endl;
    cin>>num;
    fact=factorial(num);
    cout<<"factorial is"<<fact<<endl;
    return 0;
}