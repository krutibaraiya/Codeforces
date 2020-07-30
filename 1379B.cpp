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
   IOS
   int t;
   cin >> t;
   while(t--)
   {
   		int l,r,m;
         cin >> l >> r >> m;

         if(m<=l)
         {
            cout << l  << " " << l << " " << 2*l-m << endl;
         }

         else
         {
            for(int i=l; i<=r; i++)
            {
               if(m%i <= (r-l))
               {
                  cout << i << " " << l+(m%i) << " " << l << endl;
                  break;
               }

               else if(i-(m%i) <= (r-l))
               {
                  cout << i << " " << l << " " << l+(i-(m%i)) << endl;
                  break;
               }
            }
         }
   }   


   return 0;
}

