
#include <iostream>
using namespace std;
int main(){
    int a[10];
    int sum=0;
    cout<<"enter array elements"<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        sum=sum+a[i];
    }
    cout<<"sum of given number is "<<sum<<endl;
    float avg=sum/10.0;
    cout<<"avg is"<<avg<<endl;
    return 0;
}