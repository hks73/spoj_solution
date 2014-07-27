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
int  main()
{
	string s[max];
	int n;

	for (int i =1; i <=max;i++)
	{
		/* code */
		cin>>s[i];
	}
	n=s.size();
	for (int i =1; i <=n;i++)
	{
		/* code */
		if(s[i]=='y'||s[i]=='Y')
		{
			if(n%i==0)
			{
				n++;
			}
			
		}
		if(s[i]=='n'||s[i]=='N')
		{
			if(n%i==0)
			{
				n++;
			}

		}
	}
	return 0;
}