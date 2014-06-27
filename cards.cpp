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
inline void scanint(int* x)
{
	register char c = getchar_unlocked();
	*x = 0;
	for(; (c<48)||(c>57);c = getchar_unlocked());
	for(; (c>47)&&(c<58);c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}

 
int main()
{
	int a,n,t,sum;
	scanint(&t);
	while(t--)
	{
		sum=0;
		scanint(&n);
		if(n==0)
		{
			a=0;
			printf("%d\n",a );
		}
		while(n!=0)
		{
			sum=sum+(3*n-1);
			n--;
		}
		printf("%d\n",sum );

	}
	return 0;
}