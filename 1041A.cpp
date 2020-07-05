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
   int a[n];
   for(int i=0; i<n; i++)
   {
   		cin >> a[i];
   }

   sort(a,a+n);

   if(a[n-1]-a[0]+1==n)
   	cout << 0 << endl;
   else
   	cout << a[n-1]-a[0]+1-n << endl;


   return 0;
}
 