#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;
int a[N];
int n,flag=1,idx=1,ans=1;
vector<int> dp;



int32_t main()
{
   IOS;
   
   cin >> n;

   for(int i=0; i<n; i++)
   {
   		cin >> a[i];
   }

   for(int i=0; i<n;i++)
   {
   		//idx=1;
   		if(a[i]<=a[i+1])
   		{
   			flag=1;
   			idx++;
   		}

         else
         { 
            flag=0;
            idx=1;
         }

   		/*if(ans<idx)
   		{
            ans=idx;
   		}*/

   		dp.push_back(idx);

   }

   /*for(int i=0; i<dp.size();i++)
   {
   		cout << dp[i] << " ";
   }

   cout << endl;*/

   sort(dp.begin(),dp.end(),greater<int>());

   cout << dp[0] << endl;

   

   


   return 0;
}
 