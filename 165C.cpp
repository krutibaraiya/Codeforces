#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e6 + 5;

int k;
string s;
int freq[N];

int32_t main()
{
   IOS;
   
   cin >> k;
   
   cin >> s;

   int cur=0, ans=0;

   freq[0]++;

   for(int i=0; i<s.size();i++)
   {
   		cur+=(s[i]=='1');

   		if(cur-k>=0)
   			ans+=freq[cur-k];

   		freq[cur]++;
   }

   cout << ans << endl;



   return 0;
}
 