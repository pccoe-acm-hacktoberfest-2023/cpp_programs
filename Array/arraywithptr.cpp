#include<iostream>
using namespace std; 
int main(){
    int a[5];
    int *ptr; //pointer initialized
    ptr =a;
    cout<<"Enter elements of Array : ";
    for(int i=0 ; i<5; i++){
        cin>>a[i];
    }

    cout<<"Array elements displayed using pointers are : ";
    for(int j=0; j<5; j++){
        cout<<*(ptr+j)<<" ";
    }
    return 0;
}