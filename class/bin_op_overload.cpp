#include<iostream>
using namespace std;
class fraction
{
    private: float n,d;
    public: fraction()
    {
        n =1;
        d=1;
    }
    fraction operator+(fraction);
    fraction operator/(fraction);
    void getfr(void);
    void printfr(void);
};
fraction fraction::operator +(fraction f2)
{
    fraction r;
    r.n = n*f2.d + d*f2.n;
    r.d = d*f2.d;
    return (r);
}
fraction fraction::operator /(fraction f2)
{
    fraction r;
    r.n = n*f2.d;
    r.d = d*f2.n;
    return (r);
}
void fraction::getfr(void)
{
    cout<<"\nEnter the numerator -->";
    cin>>n;
    cout<<"Enter the denominator -->";
    cin>>d;
}
void fraction::printfr(void)
{
    long double r;
    r = double (n/d);
    cout<<n<<"/"<<d<<"="<<r<<" ";
}
int main()
{
    fraction f1,f2,f3,f4;
    f1.getfr();
    f2.getfr();
    f3 = f1+f2;
    f4 = f1/f2;
    cout<<"\nFraction 1/t -->";
    f1.printfr();
    cout<<"\nFraction 2/t -->";
    f2.printfr();
    cout<<"\nSum\t\t -->";
    f3.printfr();
    cout<<"\nDivision\t -->";
    f4.printfr();
    cout<<endl;
    return 0;
}
