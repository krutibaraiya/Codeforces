#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 5e5 + 5;
int n,m,k,ans=0;
int v[N]={0};
int c[N]={0};


vector<int> adj[N];


void dfs(int x)
{
	v[x]=ans;
	c[ans]++;

	for(int i=0; i<adj[x].size();i++)
	{
		if(v[adj[x][i]]==0)
			dfs(adj[x][i]);
	}


}


int32_t main()
{
   IOS;
   //int n,m,k;
   cin >> n >> m;

   for(int i=0; i<m; i++)
   {
   		int x;
   		cin >> k;

   		if(k==n)
   		{
   			for(int p=0; p<n; p++)
   			{
   				cout << n << " ";

   			}
   				return 0;

   		}

   		else if(k>=1)
   		{
   			cin >> x;

   			for(int j=1; j<k;j++)
   			{
   				int y;
   				cin >> y;
   				adj[x].push_back(y);
   				adj[y].push_back(x);

   			}
   		}
   }

   ans++;

   for(int i=1; i<=n; i++)
   {
   		if(v[i]==0)
   			dfs(i);
   		else
   			c[i]=c[v[i]];
   		ans++;
   }

   for(int i=1; i<=n; i++)
   {
   		cout << c[i] << " ";
   }

   


   return 0;
}
 