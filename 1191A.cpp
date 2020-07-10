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
   int r=n%4;

   if(r==1)
   	cout << "0 A";
   else if(r==2)
   	cout << "1 B";
   else if(r==3)
   	cout << "2 A";
   else
   	cout << "1 A";
   return 0;
}
   	



 