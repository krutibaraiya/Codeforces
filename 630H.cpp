#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n;
   cin >> n;

   int ans=0, a=0, b=0;

   a = (n-4)/1 * (n-3)/2 * (n-2)/3 * (n-1)/4 * (n)/5;
   b = (n-4) * (n-3) * (n-2) * (n-1) * (n);

   ans = a*b;

   cout << ans << endl;
   


   return 0;
}
 