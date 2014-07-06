#include <cstdio>
#include <algorithm>
#define max 100000
int count(int n, int k)
{
	int dp[13][169];
	if(n == 0)
		return 0;
	if(k == 0)
		return 1;
	// if(dp[n][k] != -1)
	// 	return dp[n][k];
	int val = 0;
	for(int i = 0; i < n && k-i >= 0; i++)
		val += count(n-1,k-i);
	return (dp[n][k] = val);
}
int main(int argc, char *argv[])
{
	// int dp[max][max];
	int t,p,l;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d%d",&p,&l);

	count(p,l);

	
	// printf("1");
	// printf("%d\n",count );
	}

}