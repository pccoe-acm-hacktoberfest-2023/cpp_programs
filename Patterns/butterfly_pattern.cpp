#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Number\n";
    cin>>m;
    //upper
    for(int i=1; i<=m; i++){
        //left-top
        for(int j=1; j<=m; j++){
            j<=i?cout<<" * ":cout<<"   ";
        }
        //right-top
        for(int j=m;j>=1;j--){
            j>i?cout<<"   ":cout<<" * ";
        }
        cout<<endl;
    }
    //lower
    for(int i=m; i>=1; i--){
        //left-bottom
        for(int j=1; j<=m; j++){
            j<=i?cout<<" * ":cout<<"   ";
        }
        //right-bottom
        for(int j=m;j>=1;j--){
            j>i?cout<<"   ":cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}