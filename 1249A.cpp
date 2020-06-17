#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int q;
   cin >> q;

   while(q--)
   {
   		int n,t=1;
   		cin >> n;
   		int a[n];

   		for(int i=0; i<n; i++)
   		{
   			cin >> a[i];
   		}

   		sort(a,a+n);

   		for(int i=0; i<n; i++)
   		{
   			if(a[i+1]-a[i]==1)
            {
   				//t++;
               t=2;
               break;
            }

   		}

   		cout << t<< endl;


   }


   return 0;
}
 