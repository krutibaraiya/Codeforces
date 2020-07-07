#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   string t="QAQ";
   string s;
   cin >> s;

   int n=s.length();
   int cnt=0;
   //int dp[105];

   for(int i=0; i<n; i++)
   {
   		if(s[i]=='Q')
   		{
   			for(int j=i+1; j<n; j++)
   			{
   				if(s[j]=='A')
   				{
   					for(int k=j+1;k<n;k++)
   					{
   						if(s[k]=='Q')
   						{
   							cnt++;
   						}
   					}
   				}
   			}
   		}
   }

   cout << cnt << endl;




   


   return 0;
}
 