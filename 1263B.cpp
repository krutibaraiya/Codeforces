#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);
#define int unsigned long long 


const int N = 1e9 + 7;




int32_t main()
{
  IOS;
  
  int t=0;
  cin>>t;
  while(t--)
  {
    int n=0;
    cin>>n;
    vector <string> a(n);
    map <string,int> m;
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
      m[a[i]]++;
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
      if(m[a[i]]>1)
      {
        cnt++;
        m[a[i]]--;
        for(int j=0;j<10;j++)
        {
          a[i][0]='0'+j;
          if(!m[a[i]])
          {
            m[a[i]]++;
            break;
          }
        }
      }
    }
    cout<< cnt<< endl;
    for(int i=0; i<n; i++)
    {
    cout<< a[i]<< endl;
    }
}
return 0;
}