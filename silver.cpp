#include <stdio.h>
int main()
{
        int n,count;
        scanf("%d",&n);
        while(n!=0)
        {
                count=0;
                while(n>1)
                {
                        n=n/2;
                        count+=1;
                }
                printf("%d\n",count);
                scanf("%d",&n);
        }
        return 0;
}