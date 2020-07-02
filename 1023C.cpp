#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,k;
   string s;
   cin >> n >> k;
   cin >> s;

   stack<char> bkt;

   
   int a=0;

   for(int i=0; i<n; i++)
   {
   		if(s[i]=='(' && (a<k/2))
   		{
   			cout << '(';
   			bkt.push('(');
   			a++;
            //cout << a;

   		}

   		else if(s[i]==')' && (!bkt.empty()))
   		{
   			cout << ')';
   			bkt.pop();
   		}
   }



   return 0;
}
 