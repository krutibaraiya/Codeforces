#include <bits/stdc++.h>
using namespace std;

int main()

{

   int n;
   cin >> n;
  
   int sum[n];
   int rank=1;
   
   for(int i=0; i<n; i++){
   	int a,b, c,d;
   	cin >> a >> b >> c >> d;
   	sum[i] = a+b+c+d;
   	
   	}
   	
   	rank= (max_element(sum, sum+n-1) - sum)+1;
   	//rank = distance(sum, max_element(sum, sum+i));
      

 
   cout << rank << endl;

   
   return 0;
   
}
 
 