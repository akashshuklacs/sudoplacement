#include<iostream>
using namespace std;

int main() {
	//code
	int t, n, sum=0,k;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	   int arr[10001]={0};
	   cin>>n;
	   sum=0;
	   //if(n>1)
	   //arr[2]=1;
	   for(int i=2; i<=n; i++)
	   {
	       k=i;
	       if(arr[k]==0)
	       {
	           cout<<k<<" ";
	           while(k<=n)
	           {
	               arr[k]=1;
	               k+=i;
	               //cout<<arr[k];
	               //k+=i;
	           }
	       }
	   }
	   cout<<endl;
	    
	    
	}
	return 0;
}
