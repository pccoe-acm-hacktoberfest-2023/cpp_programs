#include <iostream>
using namespace std;
int main() {
   int num;
   int flag=0;
   cout<<"enter number to check whether the given number is prime "<<endl;
   cin>>num;
   if(num==0 || num==1){
       flag=1;
   }
   for(int i=2;i<=num/2;i++){
       if(num%i==0){
           flag=1;
           break;
       }
   }
   if(flag==0){
       cout<<"number is prime"<<endl;
   }
   else{
       cout<<"number is not prime"<<endl;
   }
   return 0;
}