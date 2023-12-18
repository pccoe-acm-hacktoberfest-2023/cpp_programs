#include <iostream>
using namespace std;
double area(int);
int area(int, int);
int main()
{
    int r, b, l, arearect, areacirc;
    cout << "Enter length : ";
    cin >> l;
    cout << "Enter Breadth : ";
    cin >> b;
    arearect = area(l, b);
    cout << "Area of Rectangle : " << arearect << endl;
    cout << "Enter Readius : ";
    cin >> r;
    areacirc = area(r);
    cout << "Area of circle : " << areacirc;
    return 0;
}

double area(int r){
    double area1;
    const double pi =3.14;
    area1= pi*r*r;
    return area1;
}
int area(int l, int b){
    int area2 = l*b;
    return area2;
}
