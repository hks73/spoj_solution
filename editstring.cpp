#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

#define max 100000
 
inline void scanint(int* x)
{
	register char c = getchar_unlocked();
	*x = 0;
	for(; (c<48)||(c>57);c = getchar_unlocked());
	for(; (c>47)&&(c<58);c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int t,len1,len2,i,j,m,temp1,temp2;
    char str1[2100];
    char str2[2100];
    static int a[20001][2001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str1);
        scanf("%s",str2);
        len1=strlen(str1);
        len2=strlen(str2);
        for(i=0;i<=len1;i++)
            a[i][0]=i;
        for(i=1;i<=len2;i++)
            a[0][i]=i;
        for(i=1;i<=len1;i++)
        {
            for(j=1;j<=len2;j++)
            {
                m=(str1[i-1]==str2[j-1]) ? 0:1;
                temp1=min(a[i-1][j]+1,a[i][j-1]+1);
              temp2=a[i-1][j-1]+m;
              a[i][j]=min(temp1,temp2);
            }
        }
        printf("%d\n",a[len1][len2]);
    }
    return 0;
}

