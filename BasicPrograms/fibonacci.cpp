#include<iostream>
using namespace std;
int main(){
     int m;
     cout<<"Enter number : ";
     cin>>m;
     int a =0;
     int b = 1;
     int c;
     cout<<0<<" "<<1<<" ";
     for( int i = 3 ; i<=m; i++ ){
        c = a+b;
        cout << c<<" ";
        a = b;
        b = c;
     }
     return 0;
}