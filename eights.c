#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
long long a,n;
int t;
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);

a=192+250*(n-1);
printf("%lld\n",a);

}
return 0;
}//firstly we have to check cube from 1 to 1000 and then check pattern