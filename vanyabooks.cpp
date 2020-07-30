#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,d=0;
   cin >> n;

   for(int i=9; n>0; i*=10)
   {
   	d=d+n;
   	n=n-i;
   }

   cout << d << endl;
   
   return 0;
}
 