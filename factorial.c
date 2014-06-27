#include <stdio.h>
int main()
{

	long long int i,num,fact=1;
	i=2;
	scanf("%lld",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;


	}
	printf("value is %lld\n",fact );
	return 0;
}