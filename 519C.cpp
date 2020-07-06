#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int a,b;
   //cin >> t;
   //while(t--)
   //{
   		cin >> a >> b;

   		if(a==0 && b==0)
   			cout << 0 << endl;
   		else if(2*a>=b && 2*b>=a)
   			cout << (a+b)/3 << endl;
   		else
   			cout << min(a,b) << endl;
   //}


   return 0;
}
 