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
int t,n;

int solve(int n) 
{ 
     
    if (n%2==0) 
        return 2; 
  
    
    for (int i=3; i*i <=n; i+=2) 
    { 
        if (n%i==0) 
            return i; 
    } 
  
    return n; 
} 

bool isPrime(int num)
{
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) 
    {
       if(num%i ==0) 
       {
          flag = false;
          break;
       }
    }
    return flag;
}


int32_t main()
{
   IOS;
   //int t,n;
   cin >> t;
   while(t--)
   {
   		cin >> n;

   		/*if(n%2==0)
   		{
   			cout << n/2 << " " << n/2 << endl;
   		}

   		else if(isPrime(n) && n%2!=0)
   		{
   			cout << 1 << " " << n-1 << endl;
   		}

   		else if(!isPrime(n) && n%2!=0)
   		{
   			if(n%5==0)
   			{
   				cout << 5 << " " << n-5 << endl;
   			}

   			else
   			{
   				cout << sqrt(n) << " "<< n-sqrt(n) << endl;
   			}
        }*/

      int x= solve(n);

      cout << n/x << " " << (x-1)* (n/x) << endl;
   		
   }
   


   return 0;
}

