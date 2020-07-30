#include <bits/stdc++.h>
using namespace std;


int main()
{
   long long int n, m, a, p, q, flagst;
   cin >> n >> m >> a;

   (n%a == 0)? p=0 : p=1;
   (m%a == 0)? q=0 : q=1;

   flagst = ((n/a)+ p) * ((m/a)+q);

   cout << flagst << endl;

return 0;
}
 