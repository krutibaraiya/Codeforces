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
   int a=0, b=0;
   cin >> s;

   for(auto ch:s)
   {
   		if(ch=='(')
   			a++;
   		else
   		{
   			if(a)
   				a--;
   			else
   				b++;
   		}
   }

   cout << s.size()-(a+b) << endl;




   return 0;
}
 