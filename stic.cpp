#include<bits/stdc++.h>
using namespace std;
 
int main() {
	vector<int> l(6);
	for (int i = 0 ; i < 6 ; i++) cin >> l[i];
	sort(l.begin(), l.end());
	cout << l[3] << endl;
	int lLeg = l[3];
	int nLegs = 0;
	for (int i = 0 ; i < 6 ; i++) if (l[i] == lLeg) nLegs++;
 
	if (nLegs < 4) {
		cout << "Alien";
		return 0;
	}
 
	for (int i = 0 ; i < 6 && l.size() > 2 ; i++)
		if (l[i] == lLeg) {
			l.erase(l.begin() + i);
			i--;
		}
 
	if (l[0] == l[1]) cout << "Elephant";
	else cout << "Bear";
}