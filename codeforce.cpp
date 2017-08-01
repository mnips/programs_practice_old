#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
int main()
{ll n,i,min=pow(10,9),loc=0,max=0;
cin>>n;
ll arr[n],c=0,k=0;
for(i=0;i<n;i++)
{cin>>arr[i];
if(arr[i]<=min)
{min=arr[i];k++;
if(i==n-1)
{//if(max<=arr[0])
 loc=0;//max=arr[0];
}
else{
//if(max<=arr[i+1])
loc=i+1;//max=arr[i+1];
}
}
}
ll p=loc;

while(arr[p]>0)
{
//if(arr[p]>=1)
//{
arr[p]-=1;
c++;
p++;
//}
if(p==n)
{p=0;//cout<<k<<endl;
//k=0;
}
}
cout<<c;
return 0;
}


