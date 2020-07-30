#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int a,b,c;
   cin >> a >> b >> c;

   double root1=0.0, root2=0.0;

   root1= ((-b)+ sqrt((b*b)-4*a*c))/(2*a);

   root2= ((-b)- sqrt((b*b)-4*a*c))/(2*a);

   if(root1 >= root2)
   {

   		cout << fixed << setprecision(15) << root1 << endl;
   		cout << fixed << setprecision(15) << root2 << endl;
   }

   else if(root2 > root1)
   {
   		cout << fixed << setprecision(15) << root2 << endl;
   		cout << fixed << setprecision(15) << root1 << endl;
   }



   


   return 0;
}
 