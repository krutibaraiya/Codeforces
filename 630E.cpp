#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   unsigned int x1,y1,x2,y2;
   int ans=0;
   cin >> x1 >> y1 >> x2 >> y2;

   int a= x2-x1+1;
   int b= y2-y1+1;

   if(a%2==0)
   {
   		ans=(a*b)/2;
   }

   else if(a%2!=0)
   {
   		ans= (a*b)/2+1;
   }

   cout << ans << endl;
   


   return 0;
}
 