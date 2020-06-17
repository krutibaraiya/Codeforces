#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,k,ans;
   cin >> n >>k;
   int a[n];
   for(int i=0; i<n;i++)
   {
   		cin >> a[i];
   }

   sort(a,a+n);

   if(k==0)
   {
      ans=a[0]-1;
      if(ans<1)
      {
         ans=-1;
         
      }
   }

   else if(k!=0){
       ans= a[k-1];

   for(int i=k; i<n; i++)
   {
   		if(a[i]==ans)
   		{
   			ans++;
   		}

         if(a[i]<=ans)
         {
            ans=-1;
            break;
         }
   }

}

   cout << ans << endl;





   return 0;
}
 