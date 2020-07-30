#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;
int factorial =1;

/*int fact(int k)
{
	for(int i=1; i<=k; i++)
	{
		factorial*=i;
	}

   cout << factorial << endl;

	return factorial;
}*/
	


int32_t main()
{

   IOS;
   int n;
   cin >> n;

   int ans=0;  //=nC5 + nC6 + nC7

   /*ans +=  (fact(n)/fact(n-5))/20;   //nC5

   ans+= (fact(n)/fact(n-6))/120;    //nC6

   ans+= (fact(n)/fact(n-7))/840;    //nC7*/

   //ans+= (n* (n-1)*(n-2)*(n-3)*(n-4))/120;
   ans+= n/1 * (n-1)/2 * (n-2)/3 * (n-3)/4 * (n-4)/5;

   //cout << ans << endl;

  // ans+= (n* (n-1)*(n-2)*(n-3)*(n-4)*(n-5))/720;
   ans+= n/1 * (n-1)/2 * (n-2)/3 * (n-3)/4 * (n-4)/5 * (n-5)/6;
   //cout << ans << endl;

   //ans+= (n* (n-1)*(n-2)*(n-3)*(n-4)*(n-5)*(n-6))/5040;
   ans+= n/1 * (n-1)/2 * (n-2)/3 * (n-3)/4 * (n-4)/5 * (n-5)/6 * (n-6)/7;
   cout << ans << endl;

   return 0;
}




   




 