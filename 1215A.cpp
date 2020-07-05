#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
 
const int N = 1e5 + 5;
int a1,a2,k1,k2,n;


int main()
{
   IOS;
   cin >> a1 >> a2 >> k1 >> k2 >> n;
   if(k1>k2)
   {
   		swap(k1,k2);
   		swap(a1,a2);
   }

   cout << max(0, n-((a1*k1)+(a2*k2)-(a1+a2))) << " ";

   int ans= min(a1, n/k1);

   n=n-k1*ans;
   ans=ans+n/k2;

   cout << ans;




   return 0;
}
 