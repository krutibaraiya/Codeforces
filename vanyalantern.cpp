#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	long long int l;
	int arr[1000];
	double d;
	cin >> n >> l;

	for(long long int i=0; i<n;i++){
		cin >> arr[i];
	}

	//long long int t = sizeof(arr)/ sizeof(arr[0]);

	sort(arr, arr+n);


	//for(int i=0; i<n; i++){
	//	cout << arr[i] ;
	//}

	 d= arr[0];

	for(long long int i=0; i<n-1 ; i++){
		if(d< (arr[i+1] - arr[i])/2.0000000000 ){

			d=(arr[i+1]-arr[i])/2.0000000000;
		}
	}

	if( l-arr[n-1] >d){

		d= (l-arr[n-1]);

	}

	cout <<setprecision(10) << d;

	return 0;

}








