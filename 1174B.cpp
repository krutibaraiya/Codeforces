#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,even=0, odd=0;
   cin >> n;
   int a[n];

   for(int i=0; i<n; i++)
   {
   		cin >> a[i];

   		if(a[i]%2==0)
   			even++;
   		else
   			odd++;
   }

   if(even>0 && odd>0)
   	{
   		sort(a,a+n);
   	}
   for(int i=0; i<n; i++)
   {
    	cout << a[i] << " ";
   }


   return 0;
}
