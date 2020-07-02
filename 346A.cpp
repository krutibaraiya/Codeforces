#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;
int n;
int a[N];


int32_t main()
{
   IOS;
   cin >> n;

   for(int i=0; i<n; i++)
   {
   		cin >> a[i];
   }

   sort(a,a+n);
   int g=0;

   for(int i=0; i<n; i++)
   {
      g= gcd(g,a[i]);
   }

   int x= a[n-1]/g -n;

   if(x<0)
   	x= x*(-1);

   if(x%2==0)
   	cout << "Bob" << endl;

   else
   	cout << "Alice" << endl;
   


   return 0;
}
 