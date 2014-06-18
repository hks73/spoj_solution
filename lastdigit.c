#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int power (int X, int Y)
{
int i;
int value = 1;
    for (i = 0; i < Y; i++)

    value *= X;

    return value;
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