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
   char c='a';

   for(int i=0; i<s.length();i++)
   {
   		if(s[i]<=c)
   		{
   			s[i]=c;
   			c++;
   		}

   		if(c>'z')
   		{
   			cout << s;
   			return 0;
   		}
   }

   cout << -1 << endl;



   return 0;
}
 	