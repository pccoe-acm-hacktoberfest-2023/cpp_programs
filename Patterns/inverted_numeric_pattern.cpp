#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number\n";
    cin >> m;
    int n = m;
    for (int i = 1; i <= m; i++)
    {
        for(int j=1; j <=n; j++){
            cout<<" "<<j<<" ";
        }
        n--;
        cout<<endl;
    }
    return 0;
}