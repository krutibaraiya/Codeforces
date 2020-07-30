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
   		int n,k=0;
   		cin >> n;
         int c_8=0,c_9=n;

         
         if(n%4==0)
         {
            k=n/4;
         }

         else if(n%4!=0)
         {
            k= (n/4)+1;
         }

         
         c_8+=k;

         c_9 -=c_8;

         
         for(int i=0; i<c_9; i++)
         {
            
            cout << 9;
         }

         for(int i=0; i<c_8; i++)
         {
            
            cout << 8;
         }

         cout << endl;

   }
         
   return 0;
}



         












   		

   
   


 