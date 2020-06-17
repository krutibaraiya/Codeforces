#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 2e9 + 5;


int32_t main()
{
   IOS;
   int n,k,a=0,b=0,cnt=0;
   string s;
   cin >> s >> k;

   if(s.length()<k+1)
   		cout << s.length()-1 << endl;
   	else
   	{
   		for(int i=0; i<s.length(); i++)
   		{
   			if(s[i]=='0')
   				cnt++;
   		}
   			if(cnt<k)
   				cout << s.length()-1 << endl;
   			else
   			{
   				cnt=0;

   				for(int i=s.length()-1; i>=0; i--)
   				{
   					if(s[i]!='0')
   						cnt++;
   					if(s[i]=='0')
   						b++;
   					if(b==k)
   						break;

   				}

   				cout << cnt << endl;

   			}
   		
   	}

   /*if(n==0)
   {
   	cout << 0 << endl;
   	return 0;
   }

   while(n!=0)
   {
   		a=n%10;
   		n=n/10;
   		b++;
   		//cout << b << endl;

   		


   		if(a==0)
   			cnt++;

   		if(cnt==k)
   			break;

   }

   if(b<k && cnt>0)
   	cout << b-cnt+1 << endl;
   else if(b==k)
   	cout << b << endl;
   else
   	cout << b-k << endl;


  
   //cout << b << endl;*/


   return 0;
}
 