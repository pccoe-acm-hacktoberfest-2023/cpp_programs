#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number";
    cin>>m;
    int n = m;
    for(int i = 0; i < n; i++){
        for(int j=0; j < m; j++){
            cout<<" * ";
        }
        m--;
        cout<<endl;
    }
    return 0;
}