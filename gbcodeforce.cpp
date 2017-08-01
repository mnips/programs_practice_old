#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
ll no(ll num) {
    ll count = 0;
    ll u = num;
    while (u != 0) {
        if ((u&1) == 1)
            count++;
        u >>= 1;
    }
    return count;
}

int main()
{
ll a,b,i,c=0;
cin>>a>>b;
for(i=a;i<=b;i++)
{ll n=i,cn=0,ans;
int dig=log2(i)+1;//cout<<dig<<endl;
cn=dig-no(i);

if(cn==1)
c++;
}
cout<<c<<endl;

return 0;
}
