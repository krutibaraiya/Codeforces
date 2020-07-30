#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e9 + 5;


int32_t main()
{
   IOS;

   int n;
   int flag=2;
   cin >> n;
   vector<int> v(n);

   for(int i=0; i<n; i++)
   {
   	cin >> v[i];

      if(v[i]%2 ==0)
         //flag=1;
         flag= 3-flag;
         
      cout << flag << endl;

   }

   return 0;
}
 






