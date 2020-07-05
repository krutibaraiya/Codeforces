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
   cin >> n >> k >> s;

   int a=0,b=0,c=0,ans=0;

   for(int i=0; i<n; i++)
   {
 		if(s[i]=='a')
 		{
 			a++;
         //cout << "Total A " << a << endl;
 		}
 		else
 		{
 			b++;
         //cout << "Total B " << b << endl;
 		}

 		if(min(a,b)<=k)
 		{
 			ans= max(ans,a+b);
         //cout << "*Ans " << ans << endl;
 		}
 		else
 		{
 			if(s[c]=='a')
 			{
 				a--;
            //cout << "This is A-- " << a << endl; 
 			}
 			else
 			{
 				b--;
            //cout << "This is B-- " << b << endl;
 			}
 			c++;
         //cout << "@C " << c << endl;
 		}

   }

   cout << ans << endl;


   return 0;
}
 