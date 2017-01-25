#include<iostream>
using namespace std;

int main()
{  int n;
cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int flag=false;
	
	while(flag==false)
	{ flag=true;
	for(int i=0;i<n-1;i++)
	{ if(a[i]>a[i+1])
	{ a[i]=a[i]+a[i+1];
	  a[i+1]=a[i]-a[i+1];
	  a[i]=a[i]-a[i+1];
	flag=false;
	}
	}
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	
	return 0;
}
