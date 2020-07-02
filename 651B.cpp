#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,ans=0;
   cin >> n;
   map<int,int> map;

   for(int i=0; i<n; i++)
   {
   		int x;
   		cin >> x;
   		map[x]++;

   		if(map[x]>ans)
   			ans=map[x];
   }

   cout << n-ans << endl;

   


   return 0;
}
 