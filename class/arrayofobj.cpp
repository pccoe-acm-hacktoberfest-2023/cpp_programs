#include<iostream>
using namespace std;
class ABC1{
    private : int number;
    public: void getdata(){
        cout<<"\nEnter number : ";
        cin>>number;
        cout<<number;
    }
    void putdata(){
        cout<<"The number entered is : "<<number;
    }
};
int main(){
    ABC1 obj1[3];

    for(int i=0; i<3;i++){
        obj1[i].getdata();
        obj1[i].putdata();
      
    }
      return 0;
}