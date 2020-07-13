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
   		int d;
   		cin >> d;

   		if(d>=0 || d>4)
   		{
   			double a,b;
   			a=(d+(sqrt((d*d)-(4*d))))/2;
   			b=d-a;
   			if(a>=0 && b>=0)
   			{
   				cout << fixed << setprecision(9);
   				cout << "Y" << " " << a << " " << b << endl;
   			}

   			else
   			{
   				cout << "N" << endl;
   			}
   		}

   		else
   		{
   			cout << "N" << endl;
   		}
   }
   


   return 0;
}

