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


int main()
{
	int n;
	// scanint(&n);
	cin>>n;
	while(n > 1)
	{

		if((n&(n-1))== 0)
			printf("stop\n");			
		else
			printf("NIe\n");
			break;

	}
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     long long int t;
//     scanf("%lld",&t);
//     if((t&(t-1))==0)    //checks for 2^n
//         printf("TAK\n");
//     else
//         printf("NIE\n");
//     return 0;
// }