#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    //size of one array element
    cout<<"size of a[0]"<<sizeof(a[0])<<endl;
    //size of array
    cout<<"size of array"<<sizeof(a)<<endl;
    //length of array
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"length of array"<<n<<endl;
    return 0;
}