#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define all(x) x.begin(),x.end()
#define watch(x) cout << #x << "=" << x << "\n";

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<pair<int,int>> vii;
typedef set<int> si;
typedef map<int,int> mii;
typedef map<string,int> msi;
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int t;
   cin >> t;
   while(t--)
   {
   		string str;
   		char ch='P';
   		int r=0,s=0,p=0;
   		cin >> str;

   		for(int i=0; i<str.length(); i++)
   		{
   			if(str[i]=='R')
   				r++;
   			else if(str[i]=='S')
   				s++;
   			else if(str[i]=='P')
   				p++;
   		}

         

   		if(max(r,max(s,p))==r)
   			ch='P';
   		else if(max(r,max(s,p))==s)
   			ch='R';
   		else if(max(r,max(s,p))==p)
   			ch='S';

   		for(int i=0; i<str.length();i++)
   		{
   			cout << ch;
   		}

         cout << endl;


   }
   


   return 0;
}

