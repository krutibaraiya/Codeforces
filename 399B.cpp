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
   int dp[n]={1};
   string s;
   cin >> s;


   
   for(int i=1; i<n; i++)
   {
      dp[i]= dp[i-1]*2;
   }

   //for(int i=0; i<n; i++)
   //{
      //cout << dp[i] << " ";
   //}
   //cout << endl;

      
   for(int i=0; i<n; i++)
   {
      if(s[i]=='B')
         ans=ans+dp[i];
   }

   cout << ans << endl;


   return 0;
}
 