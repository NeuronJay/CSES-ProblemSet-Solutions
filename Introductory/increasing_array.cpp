#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main ()
{
	int n;
	cin >> n;
	ll ans=0;	
	int mx=0;
	for(int i=0; i<n; ++i)
	{
		int a;
		cin >> a;
		mx = max(mx,a);
		ans = ans + mx - a;
	}
	cout << ans;
} 
