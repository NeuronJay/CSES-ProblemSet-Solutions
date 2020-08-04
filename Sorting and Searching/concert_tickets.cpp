#include <bits/stdc++.h>

using namespace std;

const int size1 = 2e5;
#define ll long long 

int main()
{	
	int n,m, h[size1], t[size1];
	cin >> n >> m;
	for(int i=0;i<n;i++)	
		cin >> h[size1];
	for(int i=0;i<m;i++)	
		cin >> t[size1];
	sort(h,h+n);
	for(int i=0;i<n;i++)	
		cout << h[i];
}
