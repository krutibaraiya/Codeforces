#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v(6);
	int x;
	int t=6;
	while(t--){
		cin >> x;
		v.push_back(x);
	}
	//for(int i=0; i<6; i++){
		//int x;
		//cin >> x;
		//v.push_back(x);
		//cin >> v[i];
	//}
	
	sort(v.begin(), v.end());

	//cout << v[3] << endl;
	int leg= v[3];
	int legcount=0;

	for(int i=0; i<6; i++){
		if(v[i] == leg)
			legcount++;
	}

	//cout << legcount << endl;

	if(legcount<4){ 
		cout << "Alien" << endl;
		return 0;
	}

	for(int i=0; i<6 && v.size() > 2 ; i++){
		if(v[i] == leg){
			v.erase(v.begin()+i);
			i--;
		}


	}

	if(v[0] == v[1]){
		cout << "Elephant" << endl;
	}
	else {
		cout << "Bear" << endl;
	}


}