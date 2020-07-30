#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,m,ans,mid;
   cin >> n >> m;

   mid= n/2;

   //if(mid<m)
   	//cout << m-1 << endl;

   //else if(n==1 && m==1)
   //	cout << 1 << endl;

   if(n==1 && m==1)
   	cout << 1 << endl;

   else if(mid<m)
   	cout << m-1 << endl;


   else
   	cout << m+1;



   return 0;
}
 