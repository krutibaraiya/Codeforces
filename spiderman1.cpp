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
   vector<int> v(n);
   for(int i=0; i<n; i++)
   {
   	cin >> v[i];
   }

   int flag=2;

   for(int i=0; i<n; i++)
   {
   	if(v[i]%2 ==0)
   	{
   		if(flag==2)
   		{
   			flag=1;
   		}
   		else
   		{
   			flag=2;
   		}

   		cout << flag << endl;

   	}

   	else
   	{
   		cout << flag << endl;
   	}
   	
   }


   return 0;
}
 