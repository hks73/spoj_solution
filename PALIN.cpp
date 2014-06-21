#include <cstdio>
#include <algorithm>
#include <iostream>
#include <stdio.h>
#define max 1000
int reverse(int x)
{
	int result = 0;
	while (x > 0)
	{
		result *= 10;
		result += (x % 10);
		x /= 10;
	}

	return result;
}
 
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
	int t,n,a,b;
	scanint(&t);
	while(t--)
	{
		scanint(&n);
		for (int i = n+1; i <max ;)
		{
			/* code */
			a=n+1;

			if(a==reverse(a))
			{
				printf("%d\n",a );

			}
			else
			a++;
			

		}
	}
	return 0;
}