#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;

   int n,k,t;
   int ans=0;
   cin >> t;

   while(t--)
   {
   	cin >> n >> k;

   	while(n>0)
   	{
   		if(n%k==0)
   		{
   			n=n/k;
   			ans++;
   		}
   		else
   		{
   			int x= n%k;
            ans=ans+x;
   			n=n-x;
   		}
   	}

   	cout << ans << endl;
   }




   return 0;
}
 