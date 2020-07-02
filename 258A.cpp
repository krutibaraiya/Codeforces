#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
 
const int N = 1e5 + 5;


int main()
{
   IOS;
   string s;
   cin >> s;
   int z=0;
   long long int n=s.length();

   for(int i=0; i<n;i++)
   {
   		if(s[i]=='0')
   			z++;
   }
   
   if(z==0)
   {
   		s.erase(s.begin()+1);
         cout << s << endl;
         return 0;
   }

   else
   {
   		for(int i=0; i<n;i++)
   		{
   			if(s[i]=='0')
   			{
   				s.erase(s.begin()+i);
   				
   				break;
   			}
   		}

   		cout << s << endl;
   }


   return 0;
}
 