#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,easy=0,hard=0;
	cin >> n;

	for(int i=0; i<n; i++){
		int x;
		cin >>x;
	
		if(x!=0)
			hard++;
		else
			easy++;
	}

	if(hard !=0)
		cout << "HARD" << endl;
	else
		cout << "EASY" << endl;
	

	return 0;
}
