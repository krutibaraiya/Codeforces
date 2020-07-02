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
   char a[n+1],b[n+1];
   cin >> a >> b;
   int diff[n];
   int cost=0;

   for(int i=0; i<n; i++)
   {
   		if(a[i]==b[i])
   		{
   			diff[i]=0;
   		}
   		else
   		{
   			diff[i]=1;
   			cost++;
            cout << cost << "*" << endl;
   		}
   }

   for(int i=0; i<n;i++)
   {
      cout << diff[i] << " ";
   }

   cout << endl;

   for(int i=0; i<n; i++)
   {
   		if(diff[i]==1 && diff[i+1]==1 && a[i]!=a[i+1])
   		{
   			
   			cost--;
   			diff[i]=0;
   			diff[i+1]=0;

            cout << cost << "$" <<endl;
   			
   		}
   }

   for(int i=0; i<n;i++)
   {
      cout << diff[i] << " ";
   }

   cout << endl;

   cout << cost << endl;




   return 0;
}
 