#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,t;
   cin >> n >> t;

   if(t<10)
   {
   	for(int i=0; i<n; i++)
   		cout << t;
   }

   else if(t==10)
   {
   	if(n==1)
   		cout << -1;
   	else
   	{
         //cout << fixed;
   		//cout <<setprecision(0) << pow(10,n-1);
         cout << 1;
         for(int i=0; i<n-1; i++)
            cout << 0;
   	}
   }


   return 0;
}
 