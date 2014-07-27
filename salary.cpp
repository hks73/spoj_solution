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
int count=1;
int w[max];
int main()
{
	int j,k,t,n;
	cin>>t;//no of test case
	while(t--)
	{
		cin>>n;//no of workers
		for (int i = 1; i <=n;i++)
		{
			
			cin>>w[i];//scan all workers according to n

		}
		sort(w,w+n);//sort workers salary in increasing order
		if(w[1]<w[n])
		{
		for (int i = 1; i <n;i++)
		{
			/* code */
			w[i]=w[i]+1;
			count++;
		}
		}

		printf("%d\n",count );
	}
	return 0;

}