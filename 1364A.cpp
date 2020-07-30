#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;

void func()
{
	int n,x;

   cin >> n >> x;

   int num=0;
   int left=0, right=0, sum=0;
   	
   vector<int> v(n);

   for(int i=0; i<n; i++)
   {
   	cin >> v[i];
   	sum+=v[i];
   }

   if(sum%x !=0)
   {
   	cout << n << endl;
   	return ;
   }

   for(int i=0; i<n; i++)
   {
   	if(v[i]%x!=0)
   	{
   		left++;
   		break;
   	}
   	left++;
   }

   if(left==n)
   {
   	cout << "-1" << endl;
   	return ;
   }

   for(int i=n-1; i>=0; i--)
   {
   	if(v[i]%x !=0)
   	{
   		right++;
   		break;
   	}
   	right++;
   }

   if(left<right)
   	num=left;
   else
   	num=right;

   cout << n-num << endl;

}



int32_t main()
{
   IOS;
   int t;
   cin >> t;
   
   while(t--)
   {
   	func();
   }




   return 0;
}
 