#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n],m,f;
		for(i=0;i<n;i++)
		cin>>a[i];
		m=a[0];
		f=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>m && a[i]>a[i]+m)
			m=a[i];
			else if(a[i]+m>m)
			m=a[i]+m;
			else
			m=a[i]+m;
			if(m>f)
			f=m;
		}
		cout<<f<<endl;
	}
	return 0;
}

