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
   		int a,b,n,m;
   		cin >> a >> b >> n >> m;
   		
   		if(min(a,b)>=m && a+b>=m+n)
   			cout << "Yes" << endl;
   		else
   			cout << "No" << endl;

   }
   


   return 0;
}
 