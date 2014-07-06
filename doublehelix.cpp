#include <cstdio>

#include <algorithm>
#define max 100000
int main()
{

	int a[max],b[max],i,j,k,n;
	int l;

	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		/* code */
	}
	
	scanf("%d",&l);
	for (i = 0; i < l;i++)
	{
		scanf("%d",&b[i]);
		/* code */
	}
	for(i=0;i<n;i++)
	{
		
		k=k+a[i];
	}
	for (i = 0; i < l;i++)
	{
		j=j+b[i];
	}
	if(k>j)
	{
		printf("%d\n",k );
	}
	else
	{
		printf("%d\n",j );
	}
	return 0;
}