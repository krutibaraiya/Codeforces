#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,k;
   cin >> n >> k;
   int a[n];

   for(int i=0; i<n; i++)
   {
   	cin >> a[i];
   }

   for(int i=0; i<n; i+=k)
   {
   	a[i]=a[0];
   }


   for(int i=0; i<n; i++)
   {
   	cout << a[i];
   }


   return 0;
}
 