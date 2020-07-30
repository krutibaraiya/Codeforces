#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 2e5 + 5;

int a[N];

int32_t main()
{

   IOS;

   int n;
   int pos=0,neg=0;
   cin >> n;
   
   map<int,int> dp;

   dp[1]=1;

   a[0]=1;

   for(int i=1; i<=n; i++)
   {
   		cin >> a[i];

   		if(a[i]>0)
   			a[i]=1;
   		else
   			a[i]=-1;

   		a[i]*=a[i-1];

   		pos+=dp[a[i]];
   		neg+=dp[-a[i]];
   		dp[a[i]]++;
   }

   cout << neg << " " << pos << endl;


   return 0;
}


   





 