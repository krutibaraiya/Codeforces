#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
	cin >> t;
	for ( int i=0; i<t; i++){
		 int a,b,c,r,p,q;
		int ans=0;
		cin >> a >> b >> c >> r;

		p= max(min(a,b), c-r);
		q= min(max(a,b), c+r);

		ans=  max(a,b) - min(a,b) - max(0, q-p);

		cout << ans << endl;
    }
}
