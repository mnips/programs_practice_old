#include <iostream>
using namespace std;
inline int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
    int test,n;
    cin>>test;
    while(test--)
    {
    	cin>>n;
    	int ar[n],mx=0;
    	long long res=0;
    	for(int i=0;i<n;i++) cin>>ar[i];
    	for(int i=n-1;i>=0;i--)
           {

            mx=max(mx,ar[i]);
        res+=mx-ar[i];}
    	cout<<res<<endl;
    }
    return 0;
}
