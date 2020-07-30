#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   
   int t;
   cin >> t;
   while(t--)
   {
   		int l,r;
   		cin >> l >> r;
   		int x=0;

   		/*for(int i=l; i<=r; i++)
   		{
   			for(int j=i+1; j<=r; j++)
   			{
   				if(j%i==0 && j!=i)
   				{
   					cout << i << " " << j << endl;
   					x=1;
   					break;
   				}
   			}

   			if(x==1)
   			{
   				break;
   			}

   		}*/

   		if(2*l <=r)
   		{
   			cout << l << " " << 2*l << endl;
   		}

   		//if(x==0)
   		else
   		{
   			cout << -1  << " " << -1 << endl;
   		}
   }

   return 0;
}
 