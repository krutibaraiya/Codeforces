#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;

int n, h[8], x, i;


int32_t main()
{
   IOS;
   cin >> n;

   for(i=0;i<n;i++)
   {
   		cin >> x;
   		h[x]++;
   }


	if (h[1] != n / 3 || h[4] + h[6] != n / 3 || h[2] + h[3] != n / 3 || h[3] > h[6])
	{
		cout << -1 << endl;
		return 0;
	}
	while (h[3]--)
	{
		cout << "1 3 6" << endl;
		h[6]--;
	}
	while (h[4]--)
	{
		cout << "1 2 4" << endl;
	}
	while (h[6]--)
	{
		cout << "1 2 6" << endl;
	}
   


   return 0;
}
 