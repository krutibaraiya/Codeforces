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
   		int n;
   		cin >> n;
   		int a[n],b[n];
   		int c,d,ans;
         cin >> c;

         a[0]=c;

   		for(int i=1; i<n; i++)
   		{
   			cin >> a[i];
            c=min(c,a[i]);
   		}

         cin >> d;
         b[0]=d;
         for(int i=1; i<n; i++)
         {
            cin >> b[i];
            d=min(d,b[i]);
         }
         int sum=0;

         for(int i=0; i<n; i++)
            {
               ans= max(a[i]-c,b[i]-d);
               sum+=ans;
            }

            cout << sum << endl;

   		



   }
   


   return 0;
}
 