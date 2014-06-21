#include <stdio.h>
 
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
	int i,j,a,b,t,m[100],f[100],n;
	scanint(&t);

	while(t--)
	{
		a=0;
		scanint(&n);
		for(i=0;i<n;i++)
		{
			scanint(&m[i]);
		}
		for(i=0;i<n;i++)
		{
			scanint(&f[i]);
		}
		for(i=0;i<n;i++)
		{
			a=a+m[i]*f[i];
		}
		printf("%d\n",a );


	}
}
