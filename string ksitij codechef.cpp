#include<iostream>
#include<math.h>
#include <stdlib.h> 
using namespace std;
typedef long long int ll;
int main()
{int t;
cin>>t;
while(t--)
{int n;
cin>>n;
int arr[n][n],c,i,j,k=0,m=0;
int x1[n],y1[n],x3[n],y3[n];
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{cin>>c;
arr[i][j]=c;
if(c==1)
{x1[k]=i;
 y1[k]=j;
 k++;
}
else
{ if(c==3)
{x3[m]=i;
 y3[m]=j;
 m++;
}
}
}
}
//int near[n];
int min=100;
int max=0;
for(i=0;i<k;i++)
{min=100;
for(j=0;j<m;j++)
{if(abs(x1[i]-x3[j])+abs(y1[i]-y3[j])<min)
 {min=abs(x1[i]-x3[j])+abs(y1[i]-y3[j]);
 }
}
if(min>max)
 max=min;
}
cout<<max<<endl;
}
return 0;
}
