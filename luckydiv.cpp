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
   int arr[]={4,7,47,74,447,474,477,744,747,774};
   int flag=0;

   for(int i=0; i<10;i++)
   {
   		if(n%arr[i] == 0)
   		{
   			flag=1;
            //cout << i << endl;
   			break;
   		}
   		else
   		{
   			continue;
   		}
   }



   if(flag == 1)
   	cout << "YES" << endl;
   else if (flag == 0)
   	cout << "NO" << endl;


   return 0;
}
 