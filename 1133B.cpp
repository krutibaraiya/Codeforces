#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,k,c=0,x;
   cin >> n >>k;
   vector<int> a(k);

   for(int i=0; i<n; i++)
   {
   	cin >> x;
      a[x%k]++;
   		
   }

   c+=a[0]/2;

   if(k%2==0)
      c+=a[k/2]/2;

   for(int i=1;i<(k+1)/2;i++)
   {
      int j=k-i;
      c+=min(a[i],a[j]);
      //cout << i << " " << j << " " << c << endl;
   }

   
   cout << 2*c << endl;


   return 0;
}
 