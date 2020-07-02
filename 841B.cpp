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
   int a[n];
   
   int o=0;

   for(int i=0; i<n; i++)
   {
   		cin >> a[i];
   		

   		if(a[i]%2!=0)
   			o=1;
   }

   

   if(o)
   	cout << "First" << endl;
   else
   	cout << "Second" << endl;


   return 0;
}
 

