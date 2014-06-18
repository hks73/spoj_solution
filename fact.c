#include <stdio.h>
int main()
{

	int i,num,fact=1;
	i=2;
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;


	}
	printf("%d\n",fact );
	return 0;
}