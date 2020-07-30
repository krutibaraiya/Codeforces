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
   int t,n,m,x,y=-1;
   cin >> t;
   while(t--)
   {
   		cin >> n >> m;
   		vi a(n);

   		for(int i=0; i<n; i++)
   		{
   			cin >> a[i];
   		}

   		si s(all(a));

   		for(int i=0; i<m; i++)
   		{
   			cin >> x;
   			if(s.count(x))
   			{
   				y=x;
   			}
   		}

   		if(y==-1)
   		{
   			cout << "NO" << endl;
   		}

   		else
   		{
   			cout << "YES" << endl;
   			cout << 1 << " " << y << endl;
   		}
   		y=-1;


   }
   


   return 0;
}






 