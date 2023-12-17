#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Number\n";
    cin>>m;
    //top
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m-i;j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=m; i>0; i--){
        for(int j=1; j<=m-i;j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}