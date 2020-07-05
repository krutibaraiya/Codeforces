#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int smallestDiv(int n)
{
	
    if (n%2==0) 
        return 2; 
  
    
    for (int i=3; i*i<=n;i+=2) 
    { 
        if (n%i==0) 
            return i; 
    } 
  
    return n; 
}

void algo(int n)
{
	int d=smallestDiv(n);
	
	int ans= 1+ (n-d)/2;
	cout << ans << endl;

}

int32_t main()
{
   IOS;
   int n;
   cin >> n;
   algo(n);
   
   return 0;
}

	

	






 