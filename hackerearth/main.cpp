#include <iostream>
using namespace std;

int main()
{
    int q,flag=0;cin>>q;
    while(flag<q)
    { long long int n,x,taken;int t;cin>>n>>t;
       x=n;
       for(int i=1;i<=t;i++)
       {
       	if(x%2==0)x=x/2;
        else x=(x-1)/2;
        taken=x/4;
        x=x-taken;
       }
    	cout<<x;
    	flag++;
    }
    return 0;
}
