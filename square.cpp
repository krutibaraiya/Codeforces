#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long int t;
	cin >> t;

	while(t--){


	int a[2];
	int b[2];

	for(int i=0; i<2; i++){
		cin >> a[i];
	}

	for(int i=0; i<2; i++){
		cin >> b[i];
	}



	sort(a, a+2);
	sort(b, b+2);

	if((a[1] == b[1]) && (a[0]+ b[0] == a[1]))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

}


	return 0;
}
