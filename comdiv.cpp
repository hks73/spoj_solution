#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

#define max 100000
long int gcd(long int a,long int b){
	if (a%b == 0)
		return b;
	else
		return gcd(b,a%b);
}
long int divisors(int h)
{
	int cnt=0;
	for (int i = 1; i <= h; i++)
	{
		/* code */
		if(h%i==0)
			++cnt;
		

	}
	return cnt;
}
int main()
{
	long int t,m,n,j,l;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		j=gcd(m,n);
		l=divisors(j);
		printf("%ld\n", l);

	}
	return 0;
}