#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long int t;
	long long int p,q;
	cin >> t;
	string s;
	cin >> s;

	p= count(s.begin(), s.end(), 'n');
	q= count(s.begin(), s.end(), 'r');

	for(long long int i=0; i<p; i++){
		cout << "1 " ;
	}

	for(long long int j=0; j<q; j++){
		cout << "0 ";
	}



	return 0;
}












