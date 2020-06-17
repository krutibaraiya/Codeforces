#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n;
   cin >> n;

   if(n<4)
   {
   		cout << "NO" << endl;
   		return 0;
   }
   else
   	cout << "YES" << endl;

   for(int i=n; i>5; i=i-2)
   {
   		cout << i << " - " << i-1 << " = " << 1 << endl;
   		cout << 1 << " * " << 1 << " = " << 1 << endl;
   }

   if(n%2==0)
   {
   		cout << 4 << " * " << 3 << " = " << 12 << endl;
   		cout << 1 << " * " << 2 << " = " << 2 << endl;
   		cout << 2 << " * " << 12 << " = " << 24 << endl;
   }

   else
   {
   		cout << 5 << " * " << 4 << " = " << 20 << endl;
   		cout << 2 << " - " << 1 << " = " << 1 << endl;
   		cout << 3 << " + " << 1 << " = " << 4 << endl;
   		cout << 20 << " + " << 4 << " = " << 24 << endl;
   }



   return 0;
}
 