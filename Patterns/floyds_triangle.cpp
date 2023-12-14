
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the Number\n";
    cin>>m;
    int n=1;
    for(int i = 1; i<=m; i++){
        for(int j=1; j<=i; j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
}