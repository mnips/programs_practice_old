#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,i=0;
    cin>>t;
    while(i<t)
    {   int l,r,arr[100000],arrb[100000];
        cin>>l;
        cin>>r;
        int flag=l;int k;
        for(k=0;k<=r-l;k++)
        {
            arr[k]=flag;
            flag++;
        }int quotient,j=0,m=0;
        while(next_permutation(arr,arr+(r-l)))
         {
        for(k=0;k<r-l;k++)
          {
              arr[k]=quotient;
              while(quotient!=0)
            {
              arrb[j++]= quotient % 2;
              quotient = quotient / 2;
            }
         for(m=0;m<=j;m++)
        cout<<arrb[m];
          }cout<<"\n";
         }
        i++;
    }

    return 0;
}
