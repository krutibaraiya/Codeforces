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
#define PI acos(-1)
#define watch(x) cout << #x << "=" << x << "\n";

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<pair<int,int>> vii;
typedef set<int> si;
typedef map<int,int> mii;
typedef map<string,int> msi;
 
const int N = 1e5 + 5;

int l3,l4,l5;


int32_t main()
{
   IOS;
   cin >> l3 >> l4 >> l5;

   double v3,v4,v5;

   v3=sqrt(2.0)/12*pow(l3,3.0);
   v4=sqrt(2.0)/6*pow(l4,3.0);

   double a5=0.5/(tan(18.0/180*PI)*(1+cos(36.0/180.0*PI)));
   double h5=sqrt(1-a5*a5)*l5,a=a5*l5;
   v5=5.0*l5*a*cos(36.0/180*PI)*h5/6.0;

   double ans= v3+v4+v5;

   cout << fixed << setprecision(12) << ans << endl; 


   return 0;
}


   



