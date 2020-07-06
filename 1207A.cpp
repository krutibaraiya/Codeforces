#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--){
    int b, p, h, f, c;
    int cost=0;
   	cin >> b >> p >> f;
   	cin >> h >> c;

   	b=b/2;

   	if(c>h){
   	swap(h,c);
      swap(p,f);
   	}

   	if(p>=b){
   		cost = cost+ (b*h);
   	}

   	if(p<b){
   		cost= cost+(p*h);
   		b=b-p;
   		cost = cost + (min(b,f))*c;
      }

   cout << cost<< endl;;
      }

   return 0;
}
