#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
 
const int N = 1e5 + 5;


int main()
{
   IOS;
   int n;
   cin >> n;
   int t2= n*n;

   int t1=1;

   for(int i=1; i<=n; i++)
   {
   	for(int j=1; j<=n/2; j++)
   	{
   		cout << t1++ << " " << t2-- <<" ";
   	}
      
      cout << endl;
   }


   return 0;
}
 