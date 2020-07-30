#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x;
	cin >> x;
	std::vector<char> v;
	for(int i=0; i< 7; i++){
		char c; cin >> c;
		v.push_back(c);
	}
	

	if(v[4] == 'w') {
		if(x == 5 || x == 6)
			cout << "53" << endl;
		else 
			cout <<"52" << endl;
		return 0;
	}
	if(x <= 29)
		cout << "12" << endl;
	else if(x <= 30) 
		cout << "11" << endl;
	else 
		cout << "7" << endl;

		
	return 0;
}
	

	 






