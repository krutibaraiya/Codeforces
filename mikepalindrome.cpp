#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int count=0;
   string s;
   cin >> s;

   for(int i=0; i< (s.size())/2; i++)
   {
   	if(s[i] != s[s.size()-1-i])
   		count++;
   }

   if(count==1)
   	cout << "YES" << endl;

   else if( count==0 && (s.size()%2 ==1))
      cout << "YES" << endl;

   else 
   	cout << "NO" << endl;


   return 0;
}
 