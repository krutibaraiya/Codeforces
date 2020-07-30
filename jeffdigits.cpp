#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,x;
   int five=0, zero=0;
   cin >> n;

   for(int i=0; i<n; i++)
   {
   	cin >> x;

   	if(x==0)
   		zero++;
   	else if(x==5)
   		five++;

   }

   if(five>=9 && zero>0)
   {
   	for(int i=0; i<five/9; i++)
   		cout << "555555555";
   	for(int i=0; i<zero; i++)
   		cout << "0";
   }

   else if(five<9 && zero>0)
   	cout << "0";

   else
   	cout << "-1";




   return 0;
}
 