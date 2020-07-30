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

   cout << n-(n/2 + n/3 + n/5 +n/7 -n/6 - n/10 -n/14 -n/15- n/21 -n/35 +n/30 + n/42 + n/70 + n/105 -n/210) << endl;
   
   return 0;
}


 