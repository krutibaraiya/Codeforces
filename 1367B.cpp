#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int t,n,b1=0,b2=0;
   cin >> t;

   while(t--)
   {     b1=0; b2=0;
   		cin >>n;
   		int a[n];

   		for(int i=0; i<n; i++)
   		{
   			cin >> a[i];
   			a[i]%=2;
   		}

   		for(int i=0; i<n; i+=2)
   		{
   			if(a[i]==1)
   				b1++;
            //cout << i << endl;
   		}

   		for(int i=1; i<n; i+=2)
   		{
   			if(a[i]==0)
   				b2++;
   		}

         //cout << b1 << b2 << endl;

         if(b1==b2)
            cout << b1 << endl;
         else
            cout << -1 << endl;


   }


   return 0;
}
   		





 