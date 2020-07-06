#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x,a[100],p=0,q=0;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>a[i];
		if(a[i]>0)
			p++;
		if(a[i]<0)
			q++;
	}
	if(p>=int((x+(1/2))/2)+1 && x%2!=0)
		cout<<2;
	else if(q>=int((x+(1/2))/2)+1 && x%2!=0)
		cout<<-2;
	else if(p>=x/2 && x%2==0)
		cout<<2;
	else if(q>=x/2 && x%2==0)
		cout<<-2;	
	else
		cout<<0;	
 
}

	
	


	
		
		
	

	
		
		
	

		
	


	


		


	














