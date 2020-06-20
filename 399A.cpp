#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   string s;
   cin >> s;
   sort(s.begin(), s.end());

   for(int i=0; i<s.size(); i++)
   {
   		if(s[i]!='+' && i!=s.size()-1)
   		{
   			cout << s[i] << "+";
   		}
   		else if(i==s.size()-1)
   		{
   			cout << s[i];
   		}
   }


   return 0;
}
 