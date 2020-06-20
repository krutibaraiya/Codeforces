#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;

void print (char ch, int times)
{
   for(int i=0; i<times; i++)
   {
      cout << ch;
   }
}


int32_t main()
{
   IOS;
   int k;
   cin >> k;
   vector<int> v(10,1);

   int c=1, i=0;

   while(c<k)
   {
      c/=v[i];
      v[i]++;
      c*=v[i];
      i=(i+1)%10;
   }

      /*for(int l=0; l<10; l++)
      {
         cout << v[l] << " ";
      }*/


   print('c',v[0]);
   print('o',v[1]);
   print('d',v[2]);
   print('e',v[3]);
   print('f',v[4]);
   print('o',v[5]);
   print('r',v[6]);
   print('c',v[7]);
   print('e',v[8]);
   print('s',v[9]);


   return 0;
}


   
   

 