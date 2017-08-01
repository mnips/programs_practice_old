#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{int n,m;
	cin>>n>>m;
	if(m<n)
	cout<<-1<<" "<<-1<<endl;
	else
	{if(m==0&&n==1)cout<<1<<" "<<1<<endl;
	else
	{if(m==n)
	{for(int i=1;i<=n;i++)
	{
	cout<<i<<" "<<i+1<<endl;
	if(i==n-1)
	{cout<<n<<" "<<1<<endl;
	goto end;
	}
	}
	}
	
	
	}
	
	}
	end:
	;
	}
}
