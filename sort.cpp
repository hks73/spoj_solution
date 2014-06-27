#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	unsigned long T, N, K, i, min;
	unsigned long hs[20000];
	cin >> T;
	while(T>0)
	{
		cin >> N >> K;
		for(i=0;i<N;i++)
			cin >> hs[i];
		sort(hs, hs+N);
		for(i=0;i<N;i++)
			cout << hs[i]<<endl;

		if(K==1)
		{
			int ans=0;
			cout << ans<<endl;

		}
		else if(K==N)
		{
			int m=hs[N-1]-hs[0];
			cout << m << endl;
		}
		else 
		{
			int g=hs[N-1]-hs[N-2];
			 cout<< g << endl;
		}
		 
		T--;
	}
}