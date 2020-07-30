#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int t;
   cin >> t;

   while(t--)
   {
   		int n,neg=0,pos=0,z=0;
   		cin >> n;
   		int a[n+1];
   		int b[n+1]={0},c[n+1]={0};

   		for(int i=0; i<n; i++)
   		{
   			cin >> a[i];
   		}

   		int x= (n-1)/2;

   		for(int i=0; i<n; i++)
   		{
   			b[i]=a[i+1]-a[i];

            //cout << b[i];

   			if(b[i]==0)
   				z++;
   			else if(b[i]>0)
   				pos++;
   			else if(b[i]<0)
   				neg++;
   		}

   		//cout << neg << " " << pos << " " << z <<endl;

   		if((neg>=x && pos>=x) || z==n)
   		{
   			for (int i=0; i<n; i++)
   			{
   				cout << a[i];
   			}
   		}
   }
   


   return 0;
}
 