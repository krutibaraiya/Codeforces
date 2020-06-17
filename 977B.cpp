#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,max=0;
   cin >> n;

   string s,ans="",result;

   cin >> s;

   map<string,int> m;

   for(int i=0; i<n-1; i++)
   {
      ans= s[i];
      ans+=s[i+1];
      m[ans]++;

      //cout << ans << m[ans] << endl;

      if(m[ans] > max)
      {
         max= m[ans];
         result=ans;
      }
   }

   cout << result << endl;



   return 0;
}
 