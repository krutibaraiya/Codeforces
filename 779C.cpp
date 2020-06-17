#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,k,ans=0,neg=0;
   cin >> n >> k;

   int a[n],b[n];
   vector<pair<int,int>> v;

   for(int i=0; i<n; i++)
   {
   		cin >> a[i];
   }

   for(int i=0; i<n; i++)
   {
   		cin >> b[i];
   }

   for(int i=0; i<n; i++)
   {
   		v.push_back(make_pair(a[i]-b[i],i));

         if(a[i]-b[i]<0)
            neg++;
   }

   k=max(neg,k);

   sort(v.begin(),v.end());

   for(int i=0; i<k; i++)
   {
   		ans+=a[v[i].second];
         //cout << ans << endl;
   }

   for(int i=k; i<n; i++)
   {
   		ans+=b[v[i].second];
         //cout << ans << endl;
   }

   cout << ans << endl;



   return 0;
}
 