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
   //int flag=-1;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++)
   {
   	cin >> arr[i]; 
   }

   sort(arr, arr+n);

   if(arr[0]!=arr[n-1] && arr[0]==arr[n/2-1] && arr[n/2]==arr[n-1])
   {
      cout << "YES"<<endl;
      cout << arr[0] << " " << arr[n-1] << endl;
   }

   else
      cout<< "NO" << endl;

   

   


   return 0;
}
 