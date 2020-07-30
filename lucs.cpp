#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   string s1,s2;
   cin >> s1 >> s2;

   if(s1==s2)
   	cout << -1;

   else if(s1!=s2)
   	cout << max(s1.size(), s2.size());



   return 0;
}
 