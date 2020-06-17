#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int t,ans;
   cin >> t;
   while(t--)
   {
   		int arr[3];
   		for(int i=0; i<3; i++)
   		{
   			cin >> arr[i];
   		}
   		sort(arr, arr+3);

   		ans= min(arr[0]+arr[1], (arr[0]+arr[1]+arr[2])/2);

   		cout << ans << endl;
   }


   return 0;
}
 