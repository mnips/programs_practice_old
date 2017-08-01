#include<iostream>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b)
{
    if (a == 0) 
       return b;
     
    return gcd(b%a, a);
}
int main()
{
while(true)
{ll n,k,c,i,j;
cin>>n>>k;
if(n==-1&&k==-1)break;
if(k<=2)c=0;
else{
if(k%2!=0)c= (k/2)*(k/2);
else c=(k/2)*(k/2)-k/2;
}
ll den=n*(n-1)/2;
ll div=gcd(c,den);
ll a =c/div;
ll b= den/div;
if(c==0)cout<<0<<endl;
else if(c==den)cout<<1<<endl;
else
cout<<a<<"/"<<b<<endl;
}

return 0;
}
