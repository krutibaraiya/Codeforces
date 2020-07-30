#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,ans=0;
   cin >> n;

   ans= 2*4*3*pow(4,n-3) + (n-3)*4*3*3*pow(4,n-4);

   cout << ans << endl;

   return 0;

}

   

 