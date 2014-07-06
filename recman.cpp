#include <stdio.h>
long long int arr[500005];
int isPresent[10000000]={0};
int main()
{
    long long int i,temp;
    arr[0]=0;
    isPresent[0]=1;
    for(i=1;i<500005;i++)
     {
         temp=arr[i-1]-i;