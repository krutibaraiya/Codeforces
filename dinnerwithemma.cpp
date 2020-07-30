#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e9 + 5;


int32_t main()
{
   IOS;
   int n,m,c,cost=0;
   cin >> n >> m;

   for(int i=0; i<n; i++)
   {
   	int temp=N;
   	//cost= max(temp,cost);
   	for(int j=0; j<m; j++)
   	{
   		cin >> c;
   		temp= min(temp,c);
   	}
   	cost= max(temp,cost);
   }

   cout << cost << endl;

   return 0;
}



 