#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main ()
{
	ll t; 
	cin >> t;
	while(t--)
	{
		int a,b;
		cin >> a >> b;
		if((a+b)%3 == 0 && 2*a >= b && 2*b >= a)
		{
			cout <<"YES" << "\n";
		}
		else
		{
			cout << "NO"<< "\n";
		}
	}
}
