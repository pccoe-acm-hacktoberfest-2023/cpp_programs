#include <iostream>  
using namespace std;  
  
int gcd(int a, int b) // The function runs recursive in nature to return GCD  
{  
   
    if (a == 0) // If a becomes zero  
       return b; // b is the GCD   
    if (b == 0)// If b becomes zero  
       return a;// a is the GCD   
    
     
    if (a == b) // The case of equal numbers   
        return a; // return any one of them   
    
   // Apply case of substraction   
    if (a > b) // if a is greater subtract b   
        return gcd(a-b, b);  
    return gcd(a, b-a); //otherwise subtract a   
}  
    
  
int main()  
{  
    int a = 8, b = 6;  
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);  
    return 0;  
}  