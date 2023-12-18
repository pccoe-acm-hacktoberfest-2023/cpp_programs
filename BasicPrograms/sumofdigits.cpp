#include <iostream>
using namespace std;
int main() {
    int n,re;
    cout<<"enter number"<<endl;
    cin>>n;
    int sum=0;
    while(n!=0){
        re=n%10;
        sum=sum+re;
        n=n/10;
    }
    cout<<"sum of given number is"<<sum;
    return 0;
}