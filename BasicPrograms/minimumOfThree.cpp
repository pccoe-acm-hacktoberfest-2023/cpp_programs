#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers:\n";
    cin>>a>>b>>c;
    if (a<c){
        cout<<"Min  = "<<a;
    }else if(b<c){
            cout<<"Min  = "<<b;
    }else{
        cout<<"Min  = "<<c;
    }
    return 0;
}