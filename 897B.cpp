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

int k,p,ans=0;

void zcy(int x)
{
	string str= to_string(x);
	string rev_str= str;
	reverse(all(rev_str));
	str+=rev_str;
	int exp=1;

	for(int i=str.size()-1; i>=0; i--)
	{
		int s=str[i]-'0';
		s*=exp;
		exp*=10;
		exp%=p;
		s%=p;
		ans+=s;
		ans%=p;

		/*watch(i);
		watch(exp);
		watch(s);
		watch(ans);
		cout << "------" <<endl;*/
	}

}



int32_t main()
{
   IOS;
   //int k,p;
   cin >> k >> p;

   for(int i=1; i<=k; i++)
   {
   		zcy(i);
   }

   cout << ans << endl;
   


   return 0;
}




 