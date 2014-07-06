#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
	unsigned long T, N, K, i, min;
	unsigned long hs[20000];
	cin >> T;
	while(T--)
	{
		cin >> N ;
		for(i=0;i<N;i++)
			cin >> hs[i];
		sort(hs, hs+N);
		// for(i=0;i<N;i++)
		// 	cout << hs[i]<<endl;
		int m=hs[0]+hs[1];
		printf("%d\n", m);

	}
	return 0;
}