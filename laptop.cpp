#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;
struct laptop
{
	int price;
	int quality;	
};

laptop arr[N];

bool cmp(laptop a, laptop b)
{
	return a.price < b.price;
}



int32_t main()
{
   IOS;
   int n;
   cin >> n;
   
   for(int i=0; i<n;i++)
   {
   		cin >> arr[i].price >> arr[i].quality;
   }

   sort(arr,arr+n,cmp);
   int flag=0;
   for(int i=1; i<n;i++)
   {
   	if(arr[i].quality < arr[i-1].quality)
   	{
   		flag=1;
   		break;
   	}

   }

   if(flag ==0)
   	cout << "Poor Alex" << endl;
   else if(flag ==1)
   	cout << "Happy Alex" << endl;


   return 0;
}
 