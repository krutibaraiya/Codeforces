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
int t,n,cnt1=0,cnt2=0;
int a[N],b[N];


int32_t main()
{
   IOS;
   cin >> t;
   while(t--)
   {
   		cin >> n;
         int from=-1, to=-1, found=0;
         vi u,v;
         mii m;


   		for(int i=0; i<n; i++)
   		{
   			cin >> a[i];
   			
            if(a[i]!=i+1)
            {
               v.pb(i);
            }

            else
               m[i]=1;

   		}
   		
         if(v.size()>=2)
         {
            from=v[0],to=v[v.size()-1];

            for(int i=from; i<=to;i++)
            {
               if(m[i]==1)
               {
                  cout << 2 << endl;
                  found =1;
                  break;
               }
            }

            if(found==0)
               cout << 1 << endl;
         }

         else
            cout << 0 << endl;

   }

   


   return 0;
}

