#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

const int N = 1e5 + 5;
int n;
int a,b,c;


int get_parts(int n) 
{
  
	vector<int> dp(n+1);
	dp[0]=0;
	
	for(int i=1; i<=n; i++)
	{
	int p=-2;
	int q=-2;
	int r=-2;

			if(i>=a)
				p= dp[i-a];
			
			if(i>=b)
				q=dp[i-b];

			if(i>=c)
				r=dp[i-c];


			if(p==-2 && q==-2 && r==-2)
				dp[i]=-2;
			else
				dp[i]= max(max(p,q),r)+1;

	}

  return dp[n];
}
			
int main() {
	IOS;
  	
  	cin >> n;
  	
 	cin >> a >> b >> c;

 	cout << get_parts(n) << endl;

}
		
		
			
		

	
	
				






