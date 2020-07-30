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
#define PI acos(-1)

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

   int n,r;
   cin >> n >> r;

   double angle=0.0, area=0.0, a=0.0;

   
   angle=(PI)-((3*PI)/(2*n));         // PI= acos(-1)

  
   a= sin(PI/n)*r;
   a/=sin(angle);
   
   area= n*r*a*sin(PI/(2*n));

   

   cout << fixed << setprecision(12) << area << endl;

   return 0;
}
   


   



