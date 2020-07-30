
#include <bits/stdc++.h>
using namespace std;

int main()
{

    
    int t;
    cin>>t;
    while(t--)
    {
      int n,q,c=0;
      int a[200005]={0};
 
      cin>>n>>q;
      if(n%2!=0 && q%2==0)
      {
        cout<<"NO"<<endl;
        continue;
      }
      else if(n%2==0 && q%2!=0 && n<2*q)
      {
        cout<<"NO"<<endl;
        continue;
      }
      else if(n%2!=0 && q%2!=0 && n<q)
      {
        cout<<"NO"<<endl;
        continue;
      }
      else if(n%2==0 && q%2==0 && n<q)
      {
        cout<<"NO"<<endl;
        continue;
      }
 
      else
      {
        if(n%2==0 && q%2!=0)
        { int p=n;
          for(int i=0;i<q;i++)
          {
            if(i==q-1)
            {
              a[i]=p;
            }
            else
            {
              a[i]=2;
              p-=2;
            }
            
 
          }
        }
        else
        {
          int p=n-q+1;
          for(int i=0;i<q;i++)
          {
            if(i==q-1)
            {
              a[i]=p;
            }
            else
            {
              a[i]=1;
              
            }
            
 
          }
 
 
        }
        cout<<"YES"<<endl;
        for(int i=0;i<q;i++)
        {
          cout<<a[i]<<" ";
        }
        cout<<endl;
      }
      
    }
        
 
    
    return 0;
    
}