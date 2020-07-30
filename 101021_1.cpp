#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define endl "\n"
#define int long long
 
const int N = 1e6;


int32_t main()
{
   IOS;
   int left=1, right=N;

   while(left!=right)
   {
   		int mid= (left+right+1)/2;
   		//cout << flush << mid << endl;
         printf("%d\n",mid);
         fflush(stdout);

   		//string query;
   		char query[3];
   		//cin >> query;
         scanf("%s",query);

   		if(strcmp(query,"<")==0)
   			right=mid-1;
   		else
   			left=mid;
   }

   //cout << flush << "! " << left << endl;
   printf("! %d\n",left);
   fflush(stdout);
   


   return 0;
}


 