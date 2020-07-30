#include<bits/stdc++.h>
using namespace std;

int main(){

	int t,x,a,c;
	vector<int> v(3);
	cin >> t;
	for(int i=0; i<t; i++){

		cin >>x;
		v[i%3]+=x;
	}

	a=-1;

	for(int i=0; i<3; i++){
		if(v[i]>a){
			c=i;
			a=v[i];
		}
	}

	if(c==0)
		cout << "chest" << endl;
	else if(c==1)
		cout << "biceps" << endl;
	else
		cout << "back" << endl;

return 0;

}
		
		
		
