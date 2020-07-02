#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e9 + 5;


int32_t main()
{
   IOS;
   int t;
   cin >> t;
   while(t--)
   {
   		int n,x;
   		bool rem,dist;
   		int ans=N;
   		cin >> n >> x;

   		for(int i=0; i<n; i++)
   		{
   			int d;
   			cin >> d;
   			rem=x%d;

            //cout << "rem= " << rem << endl;
            
            (x<d)? dist=1 : dist=0;

            //cout << "dist= " << dist << endl;
            
   			ans=min(ans, x/d +rem*(1+dist));

            //cout << ans << "*" << endl;

   		}

   		cout << ans << endl;

         //cout << "------------" << endl;
   }


   return 0;
}
 