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
   		string s;
   		cin >> s;

   		for(int i=0; i<s.size();i+=2)
   		{
   			cout << s[i];
   		}

   		cout << s[s.size()-1] << endl;
   }


   return 0;
}
 