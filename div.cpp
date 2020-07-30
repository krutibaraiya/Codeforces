#include<bits/stdc++.h>
using namespace std;



int main ()
{ 	int n;
	cin >> n;
    // if divisible by 2 
    if (n % 2 == 0) 
        cout << 2 << endl;; 
  
    // iterate from 3 to sqrt(n) 
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            cout << i << endl;; 
    } 
  
    //cout << n << endl;; 
} 