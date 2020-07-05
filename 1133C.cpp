#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 2e5 + 5;


int32_t main()
{
   IOS;
   int n,start,end,ans=0;
   cin >> n;
   int a[n];

   for(int i=0; i<n; i++)
   {
   		cin >> a[i];
   }

   sort(a,a+n);

   start=0;

   for(int end=0; end<n; end++)
   {
         while(a[end]-a[start]>5)
            start++;
         ans= max(ans, end-start+1);
   }

   cout << ans << endl;


   return 0;
}
 