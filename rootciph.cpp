#include <cstdio>
#include <iostream>
using namespace std;


int main()
    {
		int t;
		long long a,b,c;
		for(scanf("%d",&t);t>0;t--)
		{
			scanf("%lld%lld%lld",&a,&b,&c);
			cout<<a*a-2*b<<endl;
		
		}
    }
    //  x^3 + ax^2 + bx + c , a = -(x1 + x2 + x3), b = (x1x2 + x2x3 + x1x3)
// and c = x1x2x3