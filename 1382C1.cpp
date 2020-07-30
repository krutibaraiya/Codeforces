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
   string a,b;
   cin >> t;
   while(t--)
   {
   		cin >> n;
   		cin >> a >> b;
   		vi v;

   		for(int i=n-1; i>=0; i--)
   		{
   			if(a[i]==b[i])
   			{
   				continue;
   			}
   			v.pb(i+1);
   			v.pb(1);
   			v.pb(i+1);
   		}

   		cout << v.size() << endl;

   		for(auto x:v)
   		{
   			cout << x << " ";
   		}

   		cout << endl;
   }
   


   return 0;
}

