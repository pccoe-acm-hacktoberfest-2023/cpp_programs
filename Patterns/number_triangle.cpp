#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Number\n";
    cin>>m;
    
    for(int i = 1; i<=m; i++){
        for(int j=1;j<=m-i;j++){
            cout<<" ";    
        }
        for(int j=1;j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}