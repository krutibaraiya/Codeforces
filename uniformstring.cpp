#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
 
const int N = 1e5 + 5;


int main()
{
   IOS;
   int t,n,k;
   int f,r;
   string s;
   cin >> t;
   while(t--)
   {
   	cin >> n >> k;
      f=n/k;
      r=n%k;
   	
         for(int i=0; i<f; i++)
         {
            for(int j=0; j<k; j++)
            {
               cout << (char)('a'+j);
            }
         }

         for(int j=0; j<r; j++)
         {
            cout << (char)('a'+j);
         }

         cout << endl;
   	
   }
      
   return 0;
      
}



 