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
   string s;
   cin >> s;

   

   for(unsigned int i=0; i<s.length();i++)
   {
   		if(s[0]!='9' && s[0]>'4')
         {
            s[0]='9'-s[0]+'0';
         }

         else if(s[i]>'4' && i!=0)
         {
            s[i]='9'-s[i]+'0';
         }
         //watch(i);

        
   }

   cout << s << endl;

   /*for(unsigned int i=0; i<s.length();i++)
   {
      cout << s[i];
   }*/
   


   return 0;
}

