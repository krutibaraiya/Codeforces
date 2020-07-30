#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define int long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define BS binary_search
#define all(c) (c).begin(),(c).end()
#define sz(x) (int)(x).size()
#define get(a,t) get<a>(t)
#define EPS 0.000000001 //1e-9
using pii=pair<int,int>;
const int INF=1e18; 

void dprint(string s) { cout << endl;}
void dprint() { cout << endl;}
template <class T, class... U> void dprint(string s, T t, U... u) 
{int w=s.find(','); cout <<"["<< s.substr(0,w) << ": " << t << "] " ; dprint(s.substr(w+1, sz(s)-w), u...);} 


#define DEBUG 
#ifdef DEBUG
#define dbg(X...) dprint(#X,X)
#else
#define dbg(X...); 
#endif
const int N=100005;

void solve()
{
	int n,k; cin>>n>>k;
	int a[n];
	int sum=0;
	for(int &x:a)
		{cin>>x; sum+=x;}
	int b[n];
	for(int &x:b)
		cin>>x;
	sort(a,a+n);
	sort(b,b+n,greater<int>());

	for(int i=0;i<k;i++)
	{
		sum+=max(0ll,b[i]-a[i]);
	}
	cout<<sum<<endl;
}
int32_t main()
{
    IOS;
    int T; cin>>T;
    for(int tc=1;tc<=T;tc++)
    {
        //cout<<"Case #"<<tc<<": ";
        solve();
    }
    return 0;

}