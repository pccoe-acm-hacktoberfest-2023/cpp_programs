#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Number\n";
    cin>>m;
    int n=1;
    for(int i=1; i<=m; i++){
        for(int j = 1; j<=n; j++){
           if((i+j)%2 != 0 ){
                cout<<" "<<0<<" ";
           }else{
                cout<<" "<<1<<" ";
           } 
        }
        n++;
        cout<<endl;
    }
}