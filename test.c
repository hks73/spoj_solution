#include <stdio.h>
#define MAX 10000
int main()
{
	int a[MAX],i,n;

	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	
	if(a[i]==42)
	{
		break;
	}


	printf("%d\n",a[i] );
}
return 0;
}