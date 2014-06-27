#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,min;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for (int i = 0; i < n; ++i)
        {
            printf("%d\n", arr[i]);
            printf("\n");
        }
        
    }
    return 0;
}