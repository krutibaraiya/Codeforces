#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,even_cnt=0,sum=0;
   string s;
   cin >> n >> s;

   for(int i=0; i<n; i++)
   {
   		if(s[i]%2==0)
   		{
   			even_cnt++;
   			sum+=i;
   		}
   }

   cout << sum+even_cnt << endl;


   


   return 0;
}
 