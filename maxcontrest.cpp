#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;
 
int32_t main()
{
	IOS;

	int n;
	int ans=0;
	int cont=0;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	for(int i=0; i<2*n; i++){
		if(v[i%n]==1){
			cont++;
			//cout << "cont" << cont <<" " << i%n << endl;
			ans= max(cont, ans);
		}
		else{
			cont=0;
			//cout << "zero" << " " << i%n << endl;
		}
	}

	cout << ans << endl;
	return 0;
}