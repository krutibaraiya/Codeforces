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
   		int n;
   		cin >> n;
   		//string s;
   		//cin >> s;
         int s[105];

         for(int i=0; i<2*n; i++)
         {
            cin >> s[i];
         }

   		for(int i=0; i<2*n; i++)
   		{
   			for(int j=i+1; j<2*n; j++)
   			{
   				if(s[i]==s[j])
   				{
   					s[j]=-1;
   				//i--;
   				}
   			}
   		}

   		for(int i=0; i<2*n; i++)
   		{
   			if(s[i]!=-1)
   				cout << s[i]  << " ";
   		}
   		cout << endl;

   }
   


   return 0;
}

