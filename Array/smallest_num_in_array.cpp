#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"enter array size"<<endl;
    cin>>n;
    float *p= new float [n];
    cout<<"insert array elements"<<endl;
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    float small=p[0];
    for( i=0;i<n;i++){
        if(p[i]< small){
            small=p[i];
        }
    }
    cout<<"smallest number in an array is :"<<small<<endl;
    delete p;
    return 0;
}