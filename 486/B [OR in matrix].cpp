#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;


int32_t main()
{
   IOS;
   int m,n;
   cin >> m >> n;
   int B[m][n];
   int A[m][n];
   int C[m][n];

   for(int i=0; i<m; i++)
   {
   	for(int j=0; j<n; j++)
   	{
   		cin >> B[i][j];

   	}
   }

   for(int i=0; i<m; i++)
   {
   	for(int j=0; j<n; j++)
   	{
   		A[i][j]=1;
   		C[i][j]=0;

   	}
   }

   for(int i=0; i<m; i++)
   {
   	for(int j=0; j<n; j++)
   	{
   		if(B[i][j]==0)
   		{
   			for(int k=0; k<m;k++)
   			{
   				A[k][j]=0;
   			}
   			for(int k=0; k<n; k++)
   			{
   				A[i][k]=0;
   			}
   		}

   	}
   }

   for(int i=0; i<m; i++)
   {
   	for(int j=0; j<n; j++)
   	{
   		if(A[i][j]==1)
   		{
   			for(int k=0; k<m; k++)
   			{
   				C[k][j]=1;
   			}
   			for(int k=0; k<n; k++)
   			{
   				C[i][k]=1;
   			}
   		}
   	}
   }

   for(int i=0; i<m; i++)
   {
   	for(int j=0; j<n; j++)
   	{
   		if(B[i][j]!=C[i][j])
   		{
   			cout << "NO" << endl;
   			return 0;
   		}
   		
   	}
   	
   }

   cout << "YES" << endl;

   for(int i=0; i<m; i++)
   {
      for(int j=0; j<n; j++)
      {
         cout << A[i][j] << " ";

      }

      cout << endl;
   }


   return 0;


}
 