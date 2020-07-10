#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n;
   cin >> n;
   int A[N],B[N],C[N];
   int sum_a=0, sum_b=0, sum_c=0;

   for(int i=0; i<n; i++)
   {
   		cin >> A[i];
   		sum_a+=A[i];
   }

   for(int i=0; i<n-1; i++)
   {
   		cin >> B[i];
   		sum_b+=B[i];
   }

   for(int i=0; i<n-2; i++)
   {
   		cin >> C[i];
   		sum_c+=C[i];
   }

   cout << sum_a-sum_b << endl;
   cout << sum_b-sum_c << endl;


   


   return 0;
}
 