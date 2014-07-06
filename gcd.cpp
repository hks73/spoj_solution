#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int t;
    
    while(b!=0)
    {
        t = b;
        b = a%b; // B's now the remainder of A/B.
        a = t;
    } // And we go to the next iteration.
    
    return a;
}

int main()
{
    int a,b,c,g;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    g=gcd(gcd(a,b),c); // Comm./Asso. laws...
    cout<<"The GCD of the 3 numbers is: "<<g<<endl;
    return 0;
}