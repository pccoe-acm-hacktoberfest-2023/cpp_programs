#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Number\n";
    cin>>m;
    int n = m;
    for(int i = 1; i<=m; i++){
        for(int j = m; j>0 ; j--){
            j>i?cout<<"   ":cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}