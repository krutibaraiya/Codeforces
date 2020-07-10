#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first

const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   vector<bool> sieve(1001,true);
   sieve[0]=sieve[1]=false;
   set<int> s;
   vector<int> prime;

   for(int i=2; i<=1000; i++)
   {
   		if(sieve[i])
   		{
   			for(int j=2; i*j<=1000; j++)
   			{
   				sieve[i*j]=false;
   			}
   			prime.pb(i);	
   		}
   }

   int sz=prime.size();

   for(int i=0; i<sz-1; i++)
   {
   		s.insert(prime[i]+prime[i+1]+1);
   }

   int n,k,cnt=0;
   cin >> n >>k;

   for(auto it:s)
   {
   		if(it<=n)
   		{
   			if(sieve[it])
   			{
   				cnt++;
   			}
   		}
   }

   if(cnt>=k)
   {
   		cout << "YES" << endl;
   }

   else
   {
   		cout << "NO" << endl;
   }

   return 0;
}
   


 