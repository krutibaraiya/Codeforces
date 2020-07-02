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
   		int a,b,n;
   		cin >> a >> b >> n;

   		if(n%3==0)
   			cout << a << endl;
   		else if(n%3==1)
   			cout << b << endl;
   		else
   			cout << (a^b) << endl; 

   }


   return 0;
}
 