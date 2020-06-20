#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,c=0;
   cin >> n;

   vector<int> v{100,20,10,5,1};

   /*c+=n/100;
   n%=100;

   c+=n/20;
   n%=20;

   c+=n/10;
   n%=10;

   c+=n/5;
   n%=5;

   c+=n/1;*/

   for(auto it:v)
   {
   		c+=n/it;
   		n%=it;
   }
   cout << c << endl;



   return 0;
}
 