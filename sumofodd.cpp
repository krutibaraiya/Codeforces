#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int t;
   cin >> t;
   while(t--){
   	int n,k;
   	cin >> n >> k;

      if(n%2 !=0 && k%2 == 0)
         cout << "NO" << endl;
      else if(n%2 == 0 && k%2 !=0)
         cout << "NO" << endl;
   	else if(n >= (k*k))
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }


   return 0;
}
 