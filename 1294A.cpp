#include<bits/stdc++.h>
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
		int a,b,c,n;
		cin >> a >> b >> c >> n;

		int maxm= max(a,max(b,c));

		int x= maxm-a;
		int y= maxm-b;
		int z= maxm-c;

		int temp=n;

		n-=(x+y+z);

		if(n%3==0 && temp>=(x+y+z))
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;

	}

	return 0;
}

		




		

