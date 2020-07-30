#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n, p, k;
   cin >> n >> p >> k;

   if(p-k>1)
      cout << "<< ";

   for(int i=p-k; i<=p+k; i++)
   {
      if(i==p)
         cout << "(" << p << ")" << " ";
      else if(i>=1 && i<=n)
         cout << i << " ";
   }

   if(p+k<n)
      cout << ">> ";
 
   return 0;
}
