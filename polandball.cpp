#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int n,m,count=0;
   cin >> n >> m;
   //vector<string> v1(n);
   //vector<string> v2(m);

   set<string> s1;
   set<string> s2;

   for(int i=0; i<n; i++)
   {
   	string s;
   	cin >> s;
   	//v1.push_back(s);
   	s1.insert(s);
   }

   for(int i=0; i<m; i++)
   {
   	string s;
   	cin >> s;
   	//v2.push_back(s);
   	
   	if(s1.count(s))
   	{
   		count++;
   		s1.erase(s);
   	}
   	else
   		s2.insert(s);

   }

    if(count!=0)
    {
   		if(s2.size()>s1.size())
   			cout << "NO" << endl;
   		else
   			cout << "YES" << endl;
    }

    else
    {
    	if(s1.size()> s2.size())
    		cout << "YES" << endl;
    	else
    		cout << "NO" << endl;
    }
   

    //cout << count << endl;

   return 0;
}
 