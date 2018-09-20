#include<iostream>
#include<math.h>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    cin>>n;
	    if((n>0)&&(int)(sqrt(n)*(int)sqrt(n)==n))
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}
