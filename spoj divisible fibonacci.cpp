#include<iostream>
using namespace std;
int main()
{
    int i,t;
	cin>>t;
    while(t--)
    {int l,r,count=0,p=2;
    long long int m;
    cin>>l>>r>>m;
    int a0=1,a1=1,ai;
    if(m==1)
    {count+=r-l+1;goto h;
    }
    
    for(i=1;i<l-2;i++)
    {ai=a0+a1;
     //printf("%d \n",ai);
     a0=a1;
     a1=ai;p++;
    }
    for(i=l;i<=r;i++)
      {   if(p>=r)break;
          ai=a0+a1;
          //printf("%d\n",ai);
          if(ai%m==0)count++;
          a0=a1;
          a1=ai;
          p++;
      }
      h:
    cout<<count<<endl;
    }
return 0;
}
