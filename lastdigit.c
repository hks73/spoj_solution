#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int power(int x,unsigned int y)
{
	if(y==0)
	{
		return 1;
	}
	else if(y%2==0)
	{
		return power(x,y/2)*power(x,y/2);
	}
	else
	{
		return x*power(x,y/2)*power(x,y/2);
	
	}
}
int main()
{
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	c=power(a,b);
	printf("%d\n", c);
	printf("\n");
	d=c%10;
	printf("%d\n", d);
	return 0;

}