#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   long long int n,i,j,arr[100],ans=0;
   long long int a[][100]={0},b[100000]={0};
    cin>>n;
    long long int pn=pow(2,n);
    for(i=0;i<n;i++){cin>>arr[i];}

    for(i=0;i<pn;i++)
    {for(j=0;j<n;j++)
    {
        if(i & (1<<j)) a[i][j]=arr[j];
    }
    }
cout<<endl;
    for(i=0;i<pn;i++)
    {for(j=0;j<n;j++)
      {cout<<a[i][j]<<" ";}cout<<endl;
    }
cout<<endl;
    for(i=0;i<pn;i++)
    {for(j=0;j<n;j++)
    {
       b[i]=b[i]^a[i][j];
    }cout<<b[i]<<endl;
    }

    for(i=0;i<pn;i++)
    {for(j=0;j<pn;j++)
    {if(b[i]==b[j])ans++;}
    }
    cout<<endl;
cout<<ans/4-1;
    return 0;
}
