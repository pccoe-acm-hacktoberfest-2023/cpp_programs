#include<iostream>
using namespace std;

class ABC {
public:
    int data;

    void getdata() {
        cout << "Enter data: ";
        cin >> data;
        cout << "The number entered is: " << data;
    }
};

int main() {
    ABC obj;
    int *p;
    
    obj.data = 4;
    p = &obj.data;

    cout << *p << endl;

    ABC *q;
    q = &obj; 
    q->getdata();

    return 0;
}
