#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;

bool isPrime(int x)
{
   if(x==2)
      return true;
   if(x&1)
   {
      for(int i=3; i*i<=x; i+=2)
      {
         if(x%i==0)
            return false;
      }
      return true;
   }

   else
      return false;
}


int32_t main()
{
   IOS;
   int n,x;
   cin >> n;
   for(int i=0; i<n; i++)
   {
      cin >> x;

      if(x==1)
         cout << "NO" << endl;

      else if(((int) sqrt(x)* (int) sqrt(x)== x) && (isPrime((int)sqrt(x))))
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }
   

   return 0;
}
 