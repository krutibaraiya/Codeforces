#include <bits/stdc++.h>
using namespace std;

int main()

{

   int n;
   cin >> n;
   int arr[4];
   int sum[n];
   int rank;
   
   for(int i=0; i<n; i++){
   	for(int j=0; j<4; j++){
   		int mark;
   		cin >> mark;
   		arr[j]= mark;
   		sum[i] += arr[j];

   	}
   	
   	rank= max_element(sum, sum+i) - sum;
   	//rank = distance(sum, max_element(sum, sum+i));
      }
 
   cout << rank << endl;

   
   return 0;
   
}
 