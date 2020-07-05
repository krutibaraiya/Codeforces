#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;
int a[2005];


int32_t main()
{
   IOS;
   int n,sum1=0,sum2=0,cnt=0;
   cin >> n;
   for(int i=0; i<2*n; i++)
   {
   		cin >> a[i];
   }

   for(int i=0; i<n; i++)
   {
   		sum1+=a[i];
   }

   for(int i=n; i<2*n; i++)
   {
   		sum2+=a[i];
   }

   //cout << sum1 << " " << sum2 << endl;

   if(sum1==sum2 && n==1)
   		cout << -1 << endl;



   else if(sum1==sum2)
   	{

         for(int i=1; i<2*n; i++)
         {
            if(a[i]==a[0])
               cnt++;
         }

         if(cnt==(2*n)-1)
            cout << -1 << endl;
         else
         {
   		sort(a,a+2*n);

         for(int i=0; i<2*n; i++)
         {
            cout << a[i] << " ";
         }

         cout << endl;
      }
   	}

   else if(sum1!=sum2)
   {
      for(int i=0; i<2*n; i++)
      {
         cout << a[i] << " ";
      }
      cout << endl;
   }

   else
   {
      cout << -1 << endl;
   }

   return 0;
}
   



   


 