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
   int p;
   cin >> p;
   int x;
   set<int> s;
   for(int i=0; i<p; i++)
   {
   	cin >> x;
   	s.insert(x);
   }
   int q;
   cin >> q;
   for(int i=0; i<q;i++)
   {
   	cin >> x;
   	s.insert(x);
   }

   if(s.size()==n)
   	cout << "I become the guy." << endl;
   else
   	cout << "Oh, my keyboard!" << endl;

   return 0;
}




 