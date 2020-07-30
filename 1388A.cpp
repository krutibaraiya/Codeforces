#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define all(x) x.begin(),x.end()
#define watch(x) cout << #x << "=" << x << "\n";

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<pair<int,int>> vii;
typedef set<int> si;
typedef map<int,int> mii;
typedef map<string,int> msi;
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int t,n;
   cin >> t;

   while(t--)
   {
   		cin >>n;

   		if(n>=31)
   		{
   			if(n==36)
   			{
   				cout << "YES" << endl;
   				cout << 5  << " "<< 6 << " " << 10 << " " << 15 << endl;
   			}

   			else if(n==40)
   			{
   				cout << "YES" << endl;
   				cout << 3 << " " << 6  << " "<< 10  << " "<< 21 << endl;
   			}

   			else if(n==44)
   			{
   				cout << "YES" << endl;
   				cout << 6 << " " << 7  << " "<< 10 << " " << 21 << endl;
   			}

   			else 
   			{
   				cout << "YES" << endl;
   				cout << 6 << " " << 10 << " " << 14 << " " << n-30 << endl;
   			}
   		}

   		else
   		{
   			cout << "NO" << endl;
   		}
   }
   


   return 0;
}
 

