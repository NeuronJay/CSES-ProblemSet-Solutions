#include <bits/stdc++.h>
using namespace std;

string s;
bool visit[7][7];
int ans;

bool e(int i, int j)
{
	return i>=0&&i<7&&j>=0&&j<7&&!visit[i][j];
}

void dfs(int i,int j, int a=0)
{
	if(i==6&j==6)
	{
		if(a==48)
		{
			ans++;
			
		}
			return;	
	}
	visit[i][j] = 1;
	if(s[a]=='?'||s[a]=='L')
	{
		if(j&&!visit[i][j-1]){
			if(!(!e(i,j-2)&&e(i+1,j-1)&&e(i-1,j-1))
			dfs(i,j-1,a+1);
		}
	}
	if(s[a]=='?'||s[a]=='R')
	{
		if(j<6&&!visit[i][j+1]){
			if(!(!e(i,j+2)&&e(i+1,j+1)&&e(i-1,j+1))
			dfs(i,j+1,a+1);
		}
	}
		if(s[a]=='?'||s[a]=='U')
	{
		if(i&&!visit[i-1][j]){
			if(!(!e(i-2,j)&&e(i-1,j+1)&&e(i-1,j-1))
			dfs(i-1,j,a+1);
		}
	}
	if(s[a]=='?'||s[a]=='D')
	{
		if(i<6&&!visit[i+1][j]){
			if(!(!e(i-2,j)&&e(i+1,j+1)&&e(i+1,j-1))
			dfs(i+1,j,a+1);
		}
	}
}

int main()
{
	cin >> s;
	dfs(0,0);
	cout << ans;
}
