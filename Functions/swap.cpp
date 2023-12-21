#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10,b=20;
    swap(&a,&b);
    cout<<"after swapping value of a and b is"<<endl;
    cout<<"a="<<a<<"\t"<<"b="<<b;
    return 0;
}