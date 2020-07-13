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
		int n=0,cnt=0;
		cin >> n;

		
		int a=0, b=0, c=0;
		

		for(int i=2; i*i<=n; i++)
		{
			if(n%i==0)
			{
				a=i;
				break;
			}
			
		}

		if(a==0)
		{
			cout << "NO" << endl;
			continue;
		}

		
		else
		{
			n/=a;

			for(int i=a+1; i*i<=n; i++)
			{
				if(n%i==0)
				{
					b=i;
					break;
				}
			}

			if(b==0 || n/b==a || n/b==b)
			{
				cout << "NO" << endl;
				continue;
			}

			cout << "YES" << endl;
			cout << a << " " << b << " " << n/b <<endl;
		}

		
	}

	return 0;
}




		




		

