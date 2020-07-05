#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int a,b,c;
   cin >> a >> b >> c;

   if(c==0)
      {  if(a==b)
        {
   	     cout << "YES" << endl;
        }

        else 
        {
            cout << "NO" << endl;
        }


   }
   else 
   {
      if((b-a)%c==0 && (b-a)/c >=0)
      {
   	     cout << "YES" << endl;
      }
   else
   {
   	cout << "NO" << endl;
   }
}


   return 0;
}
 