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
   int t;
   cin >> t;
   while(t--)
   {
   		int x,y,z,a=0,b=0,c=0;
   		int n[3];
   		for(int i=0; i<3; i++)
   		{
   			cin >> n[i];
   		}

   		x=n[0];
   		y=n[1];
   		z=n[2];
   		
   		sort(n,n+3);

   		if(n[1]==n[2])
   		{
   			cout << "YES" << endl;
   			cout << n[0] << " " << n[0] << " " << n[2] << endl; 
   		}

   		else
   		{
   			cout << "NO" << endl;
   		}

   }
   


   return 0;
}

