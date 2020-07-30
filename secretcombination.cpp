#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
 
const int N = 1e5 + 5;




int32_t main()
{
   IOS;
   int n;
   cin >> n;
   string str;
   cin >> str;
   string ans=str;

   for(int i=0; i<=9; i++)
   {

   	for(int j=0; j<n; j++)
   	{
   		if(str[j]=='9')
   			str[j]='0';
   		else
   			str[j]+=1;

         
   	}

   	for(int j=0; j<n; j++)
   	{
   		rotate(str.begin(),str.begin()+1,str.end());
   		ans=min(ans,str);
   	}
   }

   

   
   cout << ans << endl;
   





   return 0;
}
 