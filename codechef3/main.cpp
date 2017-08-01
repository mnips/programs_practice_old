#include <iostream.h>
#include<math.h>
#include<iomanip.h>
using namespace std;

int main()
{ int t,j=0,n,k,i;
  cin>>t;

  while(j<t)
    {cin>>n>>k;
     k=min(k,n-k);
    float result=1,sum=0;
    for (i=1;i<=k;i++)
          {result *= n-i+1;
           result /= i;
           sum+=result;
          }
     sum=sum+1;
     sum=sum/pow(2,n-1);
     sum=100*sum;

     cout<<setprecision(2)<<sum<<endl;
    j++;
    }

    return 0;
}
