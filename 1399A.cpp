#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   IOS;
   int t;
   cin >> t;
   while(t--)
   {
   		int n,x,cnt=0,diff=-1;
   		cin >> n;
   		
         int a[n];
         int d[n-1];
   		vector<int>::iterator it;
   		bool flag=true;
         set<int> s;

   		for(int i=0; i<n; i++)
   		{
   			
   			cin >> a[i];
            //s.insert(a[i]);
   			
   		}

         /*if(n==1)
         {
            cout << "YES" << endl;
            return 0;
         }*/
         sort(a,a+n);

   		for(int i=0; i<n-1; i++)
         {
            diff=(a[i+1]-a[i]);

            if(diff==1 || diff==0)
            {
               flag=true;
            }

            else
            {
               flag=false;
               break;
            }
         }

         if(flag==true)
         {
            cout << "YES" << endl;
         }

         else if(flag==false)
         {
            cout << "NO" << endl;
         }
         

   }


   return 0;
}
 