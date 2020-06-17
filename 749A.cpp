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

   if(n%2 ==0)
   {
   	cout << n/2 << endl;

   	for(int i=0; i< n/2; i++)
   	{
   		cout << "2 ";
   	} 
   }

   else
   {
   	cout << n/2 << endl;

   	for (int i = 0; i < n/2 -1; i++)

   	{
   		cout << "2 ";
   	}

   	cout << "3 ";
   	
   }


   return 0;
}
 