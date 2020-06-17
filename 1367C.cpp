#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int t,n,k,c,ans=0;
   string s;

   cin >> t;

   while(t--)
   {
   		cin >> n >> k;
   		cin >> s;
   		ans=0;
   		k++;
   		c=-k;

   		for(int i=0; i<n; i++)
   		{
   			if(s[i]=='1')
   			{
   				ans= ans+ ((i-c)/k-1);
   				c=i;
   			}
   		}

   		ans= ans+ (n+k-c-1)/k-1;

   		cout << ans << endl;

   }


   return 0;
}
 