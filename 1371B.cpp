#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e9 + 5;

int n,r ,ans=0;
//int dp[N][N];



int32_t main()
{
   IOS;
   int t;
   cin >> t;
   while(t--)
   {
   		//int n,r,ans=0;
   		cin >> n >> r;
   		

   		if(n>r)
   		{
   			cout << (r*(r+1))/2 << endl;
   		}

   		else
   			cout << (n*(n-1))/2 +1 << endl;

   }
   


   return 0;
}
 