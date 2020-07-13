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
   int t,n,k=0;
   cin >> t;
   while(t--)
   {
   		cin >> n;
   		k=0;
   		k=n;

   		string s= to_string(k);

         int sz= s.size();
         int cnt=0;
         //cout << sz << endl;

         for(int i=0; i<sz; i++)
         {
            if(s[i]!='0')
            {
               cnt++;
            }
         }

         cout << cnt << endl;
   		
         for(int i=0; i<sz;i++)
         {

            
            if(s[i]!='0')
            {
               cout << s[i];
               for(int j=1; j<sz-i;j++)
               {
                  cout << '0';
               }
            cout << " ";
            }
         }

         cout << endl;
   }
   


   return 0;
}

