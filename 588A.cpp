#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,sum=0;
   cin >> n;
   vector<pair<int,int>> v;

   for(int i=0; i<n; i++)
   {
   		int a,p;
   		cin >> a >> p;
   		v.pb(mp(a,p));
   }

   int min=N;
   for(int i=0; i<n; i++)
   {

   		if(v[i].ss<min)
         {
   			min=v[i].ss;
         }
   		sum+=v[i].ff * min;
   }

   cout << sum << endl;


   


   return 0;
}
 