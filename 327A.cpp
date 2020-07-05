#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
 
const int N = 1e5 + 5;


int main()
{
   IOS;
   int n;
   cin >> n;
   int a[105];
   for(int i=1; i<=n;i++)
   {
      cin >> a[i];
   }

   int dist=0, ans=0,cnt=0,k;

   for(int i=1; i<=n; i++)
   {
      for(int j=i; j<=n; j++)
      {
      
         cnt=0;

         for(k=i; k<=j; k++)
         {
            cnt+=(1-a[k]);
         }

         for(k=1; k<=i-1;k++)
         {
            cnt+=a[k];
         }

         for(k=j+1; k<=n;k++)
         {
            cnt+=a[k];
         }

         dist=max(dist,cnt);

         
      }

      ans=max(ans,dist);

   }

   cout << ans << endl;
   


   return 0;
}
 