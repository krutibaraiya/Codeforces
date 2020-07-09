#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;
vector<int> grp[N];
vector<int> visited(N);
vector<int> parent(N);

int n,p,ans=1;

void dfs(int s, int parent, int curr_lvl)
{
	visited[s]=1;
	ans= max(ans, curr_lvl);

	for(auto it:grp[s])
	{
		//if(!visited[it])
			dfs(it,s,curr_lvl+1);
	}
	return;
}


int32_t main()
{
   IOS;
   cin >> n;
   visited.resize(n+1);

   for(int i=1; i<=n; i++)
   {
   		cin >> parent[i];
   		if(parent[i]!=-1)
   			grp[parent[i]].push_back(i);
   }

   int cnt=0;

   for(int i=1; i<=n; i++)
   {
   		if(grp[i].size()>=1 && !visited[i])
   			dfs(i,i,1);
   }

   for(int i=1; i<=n; i++)
   {
   		if(!visited[i])
   			cnt++;
   }

   cout << ans << endl;

   


   return 0;
}
 