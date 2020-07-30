#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, cr=0, pol=0;
	cin >> t;
	while(t--){
		int i;
		cin >>i;
		if (i== -1){
			if(pol>0){
				pol--;
			}
			else{cr++;}

		}
		else { pol = pol +i;}
	}
	cout << cr << endl;
}