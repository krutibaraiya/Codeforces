#include<bits/stdc++.h>
using namespace std;



int main ()
{ 	
    int x, y, z, p, q;
    cin >> x >> y >> z;

    p= x-y+z;
    q=x-y-z;

    

    if(p>0 && q>0)
        cout << "+" << endl;
    else if(p<0 && q<0)
        cout << "-" << endl;
    else if(p==0 && q==0)
        cout << "0" << endl;
    //if((p>0 && q<0) || (p<0 && q>0))
    else
        cout << "?" << endl;

return 0; 
} 


