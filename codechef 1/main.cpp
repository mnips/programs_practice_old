#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    { int m,x,y,i,k,ans,flag=0;
    cin>>m>>x>>y;
    int arr[m],arr1[100];int houses=x*y;// 4 7 8
                                        // 12 52 56 8

    for(i=0;i<m;i++)
    {cin>>arr[i];
    }
     for(i=0;i<100;i++)
        arr1[i]=i+1;
    for(i=0;i<m;i++)
    {if(arr[i]-houses>0)
      {for(k=arr[i]-1-houses;k<=arr[i];k++)
        { arr1[k]=0;
        }
      }
     else
     {for(k=0;k<=arr[i];k++)
      arr1[k]=0;
     }
     if(arr[i]+houses<=100)
      {for(k=arr[i]-1;k<=arr[i]-1+houses;k++)
        { arr1[k]=0;
        }
      }
     else
     {for(k=arr[i];k<=100;k++)
      arr1[k]=0;
     }
    }
    for(i=0;i<100;i++)
    {
      if(arr1[i]!=0)
        flag++;
    }
    cout<<flag;
    cout<<endl;

    }
    return 0;
}
