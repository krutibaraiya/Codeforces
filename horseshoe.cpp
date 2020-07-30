#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   
   vector<int> arr(4);
   for(int i=0; i<4; i++)
   	cin >> arr[i];

   set<int> shoe{arr.begin(), arr.end()};

   int x= shoe.size();

   if(x==1)
   	cout << 3 << endl;
   else if(x==2)
   	cout << 2 << endl;
   else if(x==3)
   	cout << 1 << endl;
   else if(x==4)
   	cout << 0 << endl;
   


   return 0;



}
 