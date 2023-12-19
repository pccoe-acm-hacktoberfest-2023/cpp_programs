#include<iostream>
using namespace std;

// Outer class A
class A
{
    private:
        int adata; // private member variable

    public:
        // Member function to get input for adata
        void getadata(){
            cout << "Enter the number : ";
            cin >> adata;
            cout << "Hi, you are in the outer class, and you entered: " << adata << endl;
        }

        // Inner class B
        class B
        {
            private:
                int bdata; // private member variable

            public:
                // Member function to get input for bdata
                void getbdata(){
                    cout << "Enter the number : ";
                    cin >> bdata;
                    cout << "Hi, you are in the inner class, and you entered: " << bdata;
                    // Note: Uncommenting the line below will cause an error because getadata() is a member of the outer class.
                    // getadata();
                }
        };

        B bobj; // Object of the inner class B

        // Member function to display data using the inner class object
        void display(){
            bobj.getbdata();
        }
};

int main(){
    A aobj; // Object of the outer class A

    aobj.getadata(); // Call the member function to get input for adata
    aobj.display();  // Call the member function to display data using the inner class object

    return 0;
}
