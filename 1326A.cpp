#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int t,n;
   cin >> t;
   while(t--)
   {
   		cin >> n;

   		if(n==1)
   			cout << -1;
   		else
   		{
   			cout << "2";

   			for(int i=2; i<=n; i++)
   				cout << "3";
   		}

   		cout << endl;

   }


   return 0;
}
 