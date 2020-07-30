#include<bits/stdc++.h>
using namespace std;

//#define ll long long;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long long int t;
	cin >> t;
	//long long int count=0;

	while(t--){
		long long int n, count=0; 
		cin >> n;
		long long int a[n];
		for (long long int i=0; i<n;i++){
			cin >> a[i];
		}

		sort(a, a+n);

		for(long long int i=0; i<n-1; i++){
			 
			 if(a[i]!= a[i+1])
			 	count++;
			 
            	
		}

		cout << count+1  << endl;


	}

	return 0;
}

















