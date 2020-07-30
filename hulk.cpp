#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n;
   cin >> n;

   if(n==1)
   	cout << "I hate it";
   else if(n>1)
   {
   	for(int i=1; i<=n; i++)
   	{
   		if(i%2 !=0 && i!=n)
   			cout << "I hate that ";
   		else if (i%2 == 0 && i!=n)
   			cout << "I love that ";
   		else if(i%2 !=0 && i==n)
            cout << "I hate it ";
         else if(i%2 ==0 && i==n)
            cout << "I love it ";
   	}

   }

   return 0;
}

 