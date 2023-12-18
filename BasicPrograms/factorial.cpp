#include<iostream>
using namespace std;
int main(){
    int num;
    int fact=1;
    cout<<"enter number to get factorial of"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"factorial is"<<fact;
    return 0;
}