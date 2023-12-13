#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter 2 numbers\n";
    cin>>m>>n;
    //make m by n rectangle
    for(int i=0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}