#include <cstdio>
int main()
{
	int t, n;
	scanf("%d", &t);

	while (t-- > 0) {
		scanf("%d", &n);
		double res = 0;
		for (int k = 1; k <= n; k++)
			res += n / (double)k;
		printf("%.2f\n", res);
	}
}
