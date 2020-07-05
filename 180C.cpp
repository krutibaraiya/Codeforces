#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;
int dp[N][2]={0};


int32_t main()
{
   IOS;
   string s;
   cin >> s;
   
   int n= s.length();

 
   		if(s[0]>='A' && s[0]<='Z')
   		{
   			dp[0][0]=1;
   			dp[0][1]=0;
   		}

   		else
   		{
   			dp[0][0]=0;
   			dp[0][1]=1;
   		}

         //cout << dp[0][0] << " " << dp[0][1] << endl;

   		

   
   for(int i=1; i<n; i++)

   {
         //cout << s[i] << " - ";
   		if(s[i]>='A' && s[i]<='Z')
   		{
   			dp[i][0]= min(dp[i-1][0],dp[i-1][1])+1;   //A->a
   			dp[i][1]= dp[i-1][1];
   		}

   		else  //if 'a'
   		{
   			dp[i][0]= min(dp[i-1][0],dp[i-1][1]);
   			dp[i][1]=dp[i-1][1]+1;
   		}

         //cout << dp[i][0] << " " << dp[i][1] << endl;
   }

   cout << min(dp[n-1][0],dp[n-1][1]) << endl;

   return 0;
}




 