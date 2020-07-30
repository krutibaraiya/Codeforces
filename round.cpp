#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	vector<int> v{0};
	int power=1;
	cin >> t;
	for(int i=0; i<t; i++){

		int n;
		cin>> n;
	while(n>0){
		if(n%10 !=0){
			v.push_back((n%10)*power);
		}
		n/=10;
		power*=10;
	}
}

	cout << v.size() <<endl;

	for(auto i: v)
		cout << i << " ";

	return 0;
}
