#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,k,ans=1;
   cin >> n >> k;
   

   if(k==1)
   {
   		cout << n << endl;
   		return 0;
   }

   else
   {
   		for(ans=1; ans<=n;)
   		{
   			ans= ans<<1;
            
            //cout << ans << " ";

   		}

         //cout << endl;

   		cout << ans-1 << endl;
   }




   return 0;
}
 