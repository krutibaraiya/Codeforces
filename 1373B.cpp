#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
 
const int N = 1e5 + 5;


int main()
{
   IOS;
   int t;
   cin >> t;

   while(t--)
   {
   		string s;
   		cin >> s;
         //int s1=0,s2=0
   		auto s1=s.find("10");
         auto s2=s.find("01");

   		//cout << s1 << " " << s2 << endl;

   		int i=0;

   		while(s1!=string::npos || s2!=string::npos)
   		{
   			if(s1!=string::npos)
   			{
   				s.erase(s.begin()+s1);
   				s.erase(s.begin()+s1);
   			}

   			else
   			{
   				s.erase(s.begin()+s2);
   				s.erase(s.begin()+s2);
   			}

   			//cout << s << endl;
   			
            i++;


   			s1=s.find("10");
   			s2=s.find("01");

   			//cout << i << endl;

   		}
   			if(i%2==0)
   				cout << "NET" << endl;
   			else
   				cout << "DA" << endl;
   }


   return 0;
}
 