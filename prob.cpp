#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		int sum =0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			sum+=a[i];
		}
		int b[n];
		for(int i=0; i<n; i++){
			cin >> b[i];
		}

		sort(a,a+n);
		sort(b,b+n, greater<int>());
		
		for(int i=0; i<k; i++){
			
				sum+= max(0, b[i]- a[i]);
			
		}
		cout << sum << endl;
		
}
return 0;
}
	




			
			

		


				

			

			
		


		
		

		


	





		

		

	

		








		
		


