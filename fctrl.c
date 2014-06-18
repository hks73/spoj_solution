#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int power(int x, unsigned int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
 
}
int main()
{
	int n,m,a,i,f=0;
	scanf("%d",&n);

	for(i=1;i<n;i++)
	{
		m=power(5.0,i);
		
		if(n/m!=0)
		{
		f= f+n/m;
		}
	}
	printf("%d\n",f);
}