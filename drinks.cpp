#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   double n;
   cin >> n;
   int x;
   double sum=0;
   double ans;
   for(int i=0; i<n;i++)
   {
   	cin >> x;
   	sum+=x;

   }
   ans=sum/n;

   cout <<  ans << endl;



   return 0;
}


