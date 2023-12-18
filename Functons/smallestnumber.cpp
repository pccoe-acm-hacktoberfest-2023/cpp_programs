// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//function defination
int min(int num1,int num2,int num3,int num4){
    int low;
    if(num1<num2){
        low=num1;
    }
    else{
        low=num2;
    }
    if(num3<low){
        low=num3;
    }
    if(num4<low){
        low=num4;
    }
    return low;
}
int main() {
  int num1,num2,num3,num4,small;
  cout<<"enter four numbers"<<endl;
  cin>>num1>>num2>>num3>>num4;
  small=min(num1,num2,num3,num4);//function call
  cout<<"the samllest number is"<<small<<endl;
   return 0;
}