#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
int t, n, i;
long long  s, a;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
s = 0;
for(i=0;i<n;i++)
{
scanf("%lld",&a);
s += a;
if(s >= n) s %= n;
}
if(s == 0) printf("YES\n");
else printf("NO\n");
}
return 0;
}
