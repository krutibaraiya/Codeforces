#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 2e5 + 5;


int32_t main()
{
   IOS;
   int n, ans=0;
   cin >> n;
   int arr[N];
   for(int i=0; i<n; i++)
   {
   		 cin >> arr[i];
   		 arr[i+n]=arr[i];
   }

   for(int i=1, j=1; i<=2*n; i=j)
   {
   		while(j<=2*n && arr[j] ==arr[i])
   			j++;
   		if(arr[i]==1)
   			ans= max(ans, j-i);
   }

   cout << ans << endl;






   return 0;
}
 