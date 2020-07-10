#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n;
   cin >> n;

   int f[5005];

   for(int i=1; i<=n; i++)
   {
   		cin >> f[i];
   }

   for(int i=1; i<=n; i++)
   {
   		if(f[f[f[i]]]==i)
   		{
   			cout << "YES" << endl;
   			return 0;
   		}
   }

   cout << "NO" << endl;

   


   return 0;
}
 