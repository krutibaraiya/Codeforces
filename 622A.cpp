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

   for(int i=1;i<n;i++)
   {
   		n=n-i;
   		//cout << n << " ";
   }

   //cout << endl;

   cout << n << endl;


   return 0;
}
 