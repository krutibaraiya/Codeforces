#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,m,a,b,temp=0,ans=0;
   cin >> n >> m >> a >> b;

   if(b/m <a)
   {
   		ans+=min((n%m)*a,b);
   		ans+=((n/m)*b);
         
   }
         

   else
   {
   		ans+=n*a;
   }

   cout << ans << endl;
   


   return 0;
}
 