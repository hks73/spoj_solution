#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <vector>
#include <queue>
char str[50005];
int s[50005];
long long l;
using namespace std;
int cmp(const void *a,const void *b)
{
	return (strcmp((str+ *((int*)a)),(str+ *((int*)b))));
}
void suffixarray(int h)
{
	for (int i =1; i <=l; ++i) s[i]=i;
	qsort(s,h,sizeof(int),cmp);
}
long long lcp(void) 
{
int i;
long long count = 0;
char *z = str, *y = str;
int p[50005] = {0};
for(i=1;i<l;i++) {
z = str + s[i];
y = str + s[i-1];
while(*z==*y) {
p[i]++;
z++;
y++;
}
count += p[i];
}
return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		l=strlen(str);
		suffixarray(l);
		int c=lcp();
		cout<<(l*(l+1)/2)-c;
	}
	return 0;
}
