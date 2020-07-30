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
   string s;
   cin >> s;

   int len= s.size();

   n= (10* s[len-2]) + (s[len-1]);


   if(n%4 == 0)
   	cout << '4' << endl;
   else
   	cout << '0' << endl;


   return 0;
}
 