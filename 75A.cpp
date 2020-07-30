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

int reduce(int n)
{
   int ans=0,i=1;

   while(n)
   {
      if(n%10!=0)
      {
         ans += i*(n%10);
         i*=10;
      }
      n/=10;
   }

   return ans;
}


int32_t main()
{
   IOS;
   int a,b,c;
   cin >> a >> b;
   c=a+b;

   a=reduce(a);
   b=reduce(b);
   c=reduce(c);

   if(a+b==c)
      cout << "YES" << endl;
   else
      cout << "NO" << endl;



   


   


   return 0;
}

