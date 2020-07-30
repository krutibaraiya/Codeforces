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
 
const int N = 2e5 + 5;


int32_t main()
{
   IOS;

   int n=0,m=0,x=0,y=0,k=0,maxi=0,num=0,ans=0,ind=0;
   int a[N], b[N];

   cin>>n>>m;
   cin>>x>>k>>y;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	n++;
	m++;
	
	for(int i=0;i<m;i++)

	{
		maxi=num=0;
		
		while(ind<n && b[i]!=a[ind]){
			num++;
			maxi=max(maxi,a[ind]);
			ind++;
		}
		
		
		
		if(ind==n)
		{
			cout<<"-1" << endl;
			return 0;
		}
		
		if(num!=0)
		{
			ans+=y*(num%k);
			num-=num%k;
			
			if(num==0)
			{
				if(maxi>b[i] && (i==0 || maxi>b[i-1]))
				{
					cout<<"-1" << endl;
					return 0;
				}
			}
			else
			{
				ans+=min(x*(num/k-1),y*(num/k-1)*k);
				
				if(maxi>b[i] && (i==0 || maxi>b[i-1]))
				{
					ans+=x;
				}
				else 
					ans+=min(x,k*y);
			}
		}

		ind++;
	}
	
	cout<<ans<<endl;
   


   return 0;
}

