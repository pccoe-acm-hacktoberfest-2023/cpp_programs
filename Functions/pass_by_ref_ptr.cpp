#include <iostream>
using namespace std;
void passbyptr(int *n);
int main()
{
    int m, *ptr;
    cout << "Enter number which will passed in the funciton using ptr and increment by 1  : ";
    cin >> m;
    ptr = &m; // ptr has the address of m
    passbyptr(ptr);
    cout << "Result : " << m;
    return 0;
}
void passbyptr(int *n)
{
    *n = *n + 1;
}