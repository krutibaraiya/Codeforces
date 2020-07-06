#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
  int t, n, k, sum=0;
  cin>>t;
   
   
    while(t--)
    {   
        sum=0;
        cin>>n>>k;
        int a[n];
        int w[k];
       
        for(int i=0; i<n; i++)
        {
        	cin>>a[i];
        }
        
        for(int i=0; i<k; i++)
        {
        	cin>>w[i];
        }
        
        sort(a,a+n);
        sort(w,w+k);
        
        
        
        for(int i=n-1; i>=n-k; i-- )
        {
        	sum=sum+a[i];
    	}	
        
        if(w[0]==1)
        {
            for(int i=0; w[i]==1 && i<k; i++)
            sum=sum+a[n-1-i];
        
        }

        int i=0;
        for(int j=k-1;w[j]!=1 && j>=0 ; j--)
        {
            
            sum=sum+a[i];
            i=i+w[j]-1;
            
            if(i>=n)
            	break;
        
        
        }
      
        cout<<sum<<endl;
        
    }


   return 0;
}
 