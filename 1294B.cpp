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
		int n;
		cin >> n;

		int x,y;
		int R[n]={},U[n]={};
		bool flag =true;
		vii co;

		for(int i=0; i<n; i++)
		{
			cin >> x >> y;
			co.pb(mp(x,y));
		}

		sort(all(co));

		R[0]=co[0].ff;
		U[0]=co[0].ss;

		for(int i=1; i<n; i++)
		{
			if(co[i-1].ff > co[i].ff || co[i-1].ss > co[i].ss)
			{
				flag=false;
				break;
			}
		}

		if(flag==false)
		{
			cout << "NO" << endl;
		}

		else
		{
			cout << "YES" << endl;

			for(int i=1; i<n; i++)
			{
				R[i]= co[i].ff - co[i-1].ff;
				U[i]= co[i].ss - co[i-1].ss;
			}

			for(int i=0; i<n; i++)
			{
				for(int j=0; j<R[i]; j++)
				{
					cout << "R";
				}

				for(int k=0; k<U[i]; k++)
				{
					cout << "U";
				}
			}

			cout << endl;
		}


	}



	return 0;
}