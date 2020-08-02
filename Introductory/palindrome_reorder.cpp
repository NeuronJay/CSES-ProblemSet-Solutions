#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main ()
{
	string s;
	cin >> s;
	int ans=1, c=0;
	char l = 'A';	
	for (int i=0;i<s.length();i++)
	{
		if ( s.at(i) == l)
		{
			++c;
			ans = max(c,ans);
		}

		else 
		{
			l = s.at(i);
			c = 1;			
		}
	}
	cout << ans;
} 
