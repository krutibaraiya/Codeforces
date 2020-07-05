#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,ans=0;
   cin >> n;
   int a[n];

   for(int i=1; i<=n; i++)
   {
  		cin >> a[i]; 	
   }

   for(int i=1; i<=n; i++)
   {
   		if(a[i]==1 || a[i]==n)
   		{
   			ans=max(ans,i-1);
   			ans=max(ans,n-i);
   		}
   }

   cout << ans << endl;


   return 0;
}
 