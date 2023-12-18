#include<iostream>
using namespace std;
int main(){
    int var;
    int &ref_var =var;
    var =100;
    cout<<"Original variable is : "<<var<<endl;
    cout<<"Reference Variable is : "<<ref_var<<endl;
    return 0;
}