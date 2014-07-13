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


int maxSubArraySum(int a[])
{
   int max_so_far = 0, max_ending_here = 0;
   int i;
   for(i = 0; i < 8; i++)
   {
     max_ending_here = max_ending_here + a[i];
     if(max_ending_here < 0)
        max_ending_here = 0;
     if(max_so_far < max_ending_here)
        max_so_far = max_ending_here;
    }
    return max_so_far;
} 
 
/*Driver program to test maxSubArraySum*/
int main()
{
   // int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
   // int n = sizeof(a)/sizeof(a[0]);
    int a[10000];
    for (int i = 0; i < 8;i++)
    {
      scanf("%d",&a[i]);
     
    }
    // int n=a.size();
       int max_sum = maxSubArraySum(a);
   printf("Maximum contiguous sum is %d\n", max_sum);
   getchar();
   return 0;
}