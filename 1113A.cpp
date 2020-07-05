#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
 
const int N = 1e5 + 5;


int main()
{
   IOS;
   int n,v;
   cin >> n >> v;
   
   int cost=0;
   int vol=0;
   int i=1;

   while(i<n)
   {
      if(vol<(n-i))
      {
         cost+= i* min(v-vol, n-i-vol);
         vol+= min(v-vol,n-i-vol);
      }
      i++;
      vol--;
   }

   cout << cost << endl;

   return 0;
}
   


   


 