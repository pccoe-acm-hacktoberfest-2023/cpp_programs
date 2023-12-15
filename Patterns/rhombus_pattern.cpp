#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter Number\n";
    cin >> m;
    int n = m;
    for (int i = 1; i <= m; i++)
    {
        for(int j=1; j<=n; j++){
            cout<<"   ";
        }
        n--;
        for(int j=1; j<=m;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}