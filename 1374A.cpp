#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int t;
   cin >> t;
   while(t--)
   {
   		int x,y,n;
   		cin >> x >> y >> n;

   		int div=(n-y)/x;

   		cout << (div*x)+y << endl;   
   }
   


   return 0;
}
 