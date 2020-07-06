#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 1e5 + 5;

void merge(int arr[], int left, int mid, int right)
{
	int i,j,k;

	int n1 = mid - left + 1; 
    int n2 =  right - mid; 
  
    
    int L[n1], R[n2]; 
  
    
    for (i = 0; i < n1; i++) 
        L[i] = arr[left + i]; 
    for (j = 0; j < n2; j++) 

        R[j] = arr[mid + 1+ j]; 

  
    
    i = 0; 
    j = 0; 
    k = left; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
   
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
}

void mergeSort(int arr[],int left,int right)
{
	if(left<right)
	{
		int mid=left+(right-left)/2;

		mergeSort(arr,left,mid);
		mergeSort(arr,mid+1,right);

		merge(arr,left,mid,right);
	}
}




int32_t main()
{
   IOS;
   int t;
   cin >> t;
   while(t--)
   {
   		int n,k,b,count=0,ans=0;
   		cin >> n >> k;

   		int a[n],w[k];

   		for(int i=0; i<n; i++)
   		{
   			cin >> a[i];
   		}

   		for(int i=0; i<k; i++)
   		{
   			cin >> w[i];
   		}

   		mergeSort(w,0,k-1);

   		for(int i=0; i<k;i++)
   		{
   			if(w[i]==1)
   				count++;
   		}

   		mergeSort(a,0,n-1);

   		b=n-1;

   		for(int i=0; i<count; i++)
   		{
   			ans=ans+a[b];
   			ans=ans+a[b];
   			b--;
   		}

   		n=n-count;
   		b=n-1;
   		int j=0;

   		for(int i=k-1;i>=count;i--)
   		{
   			ans=ans+a[b];
   			b--;
   			ans=ans+a[j];
   			j=j+w[i]-1;
   		}

   		cout << ans << endl;
   }


   return 0;
}
 