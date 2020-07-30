#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,flag=0,part=1;
   cin >> n;
   int arr[n];

   for(int i=0; i<n; i++)
   {
   	cin >> arr[i];
   	if(arr[i]==1)
   		flag=1;
   }

   if(flag==0)
   {
   	cout << 0 << endl;
   	return 0;
   }


   for(int i=0; i<n; i++)
   {
   	if(arr[i]==1)
   	{
   		for(int j=i+1;j<n;j++)
   		{
   			if(arr[j]==1)
   			{
   				part= part*(j-i);
   				break;
   				
   			}
   		}
   	}
   }

   

   cout << part << endl;


   return 0;
}
 