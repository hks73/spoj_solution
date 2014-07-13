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
int maximum(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int i,j,k,n,a[max],b[max];
	
	scanint(&n);
	for (i =1; i <= n; ++i)
	{
		/* code */
		scanint(&a[i]);
	}
	scanint(&k);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=i+k-1;j++)
		{
			b[i]=maximum(maximum(a[j],a[j+1]),a[j+2]);
			
			break;
		}
	}
	printf("\n");
	for(i=1;i<=n-k+1;i++)
		printf("%d",b[i] );
	printf("\n");
	return 0;
}

