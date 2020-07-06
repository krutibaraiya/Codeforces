#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n; unsigned int cnt=0;
   cin >> n;

   vector<int> a(n);

   //set<int> s;
   map<unsigned int,unsigned int> m;

   for(int i=0; i<n; i++)
   {
   		cin >> a[i];
         //m[a]++;
   }

   sort(a.begin(),a.end());
   set <int> s{a.begin(),a.end()};

   if(s.size()==n)
   {
   		cout << n << endl;
   		return 0;
   }

   else
   {
      for(int i=0; i<n; i++)
      {
         if(a[i]-1!=0 && m[a[i]-1]==0)
         {
            m[a[i]-1]=1;
            cnt++;
         }

         else if(a[i]!=0 && m[a[i]]==0)
         {
            m[a[i]]=1;
            cnt++;
         }

         else if(a[i]+1!=0 && m[a[i]+1]==0)
         {
            m[a[i]+1]=1;
            cnt++;
         }
      }

      cout << cnt << endl;
   }

   






   


   return 0;
}
 