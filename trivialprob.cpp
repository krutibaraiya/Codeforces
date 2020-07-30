#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;

int factorialZeros(int n)
{
    int zeroCount=0;
    while(n){
    n=n/5;
    zeroCount+=n;
}
    return zeroCount;

}


int32_t main()
{
   IOS;
   int m;
   cin >> m;
   int number=0;
   vector<int> v;

   for(int i=1;;i++){
    if(factorialZeros(i) == m){

        number++;
        v.push_back(i);
    }
    if(factorialZeros(i)>m){
        break;
    }

   }

   cout << number << endl;

   for(int i=0; i<v.size(); i++)
   {
    cout << v[i] << " ";
   }

   return 0;
}

 