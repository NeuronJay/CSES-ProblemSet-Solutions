#include <bits/stdc++.h>

using namespace std;

const int size1 = 2e5;
#define ll long long 

int main()
{	
	int n,x, a[size1];
	cin >> n >> x;
	for(int i=0;i<n;i++)	
		cin >> a[i];
	sort(a,a+n);
	int ans =0;
	for(int i=0,j=n-1;i<j;)
	{
		while(i<j&&a[i]+a[j]>x)
		{
			--j;
		}
		if(i>=j)
			break;
		ans++;
		i++;j--;
	}
	cout << n-ans;
	
}
