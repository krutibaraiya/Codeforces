#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,x,temp,one=0,two=0,three=0,full_taxi=0;
   cin >> n;

   while(n--)
   {
   		cin >> x;

   		if(x==1)
         {
   			one++;
         }
   		if(x==2)
         {
   			two++;
         }
   		if(x==3)
         {
   			three++;
         }
   		if(x==4)
         {
   			full_taxi++;
         }
            
   }

   temp=min(one,three);
   full_taxi+=temp;

   

   one-=temp;
   three-=temp;
   full_taxi+=two/2;
   two%=2;
   

   temp=(one and two);
   full_taxi+=temp;
   two-=temp;

   one-=min(one,2*temp);
   full_taxi+=one/4;
   one%=4;
   

   full_taxi+=(one>0)+two+three;

   //cout << one << " " << two << " " << three << " " << temp << endl;


   cout << full_taxi << endl;


   return 0;
}
   


 