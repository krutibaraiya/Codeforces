#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	 
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int p;
		int n,k;
		cin >> n >> k;

		if(n%2 ==0){
			cout << n+2*k << endl;
			continue;
		}

		for(int j=n; j>=2; j--){
			if(n%j == 0){
				p=j;
			}
			
		}

		cout << 2*(k-1)+n+p << endl;
	}
	

	return 0;

}










