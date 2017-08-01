#include <stdio.h>

int main()
{
    int N,i=0,j=0,k=0; int z[1000],v[1000],sumz=0,sumv=0;
    scanf("%d",&N);int arr[N];
    while(i<N)
    {
         scanf("%d",&arr[i]);
         if(arr[i]%2==0)
         {  z[k]=arr[i];
            k++;sumz+=arr[i];
         }
    	else {v[j]=arr[i]; j++;sumv+=arr[i];}
    	i++;
    }int temp,r;
    for(i=0;i<k;i++){
      temp=z[i];
      r=i-1;
      while((temp<z[r])&&(r>=0)){
      z[r+1]=z[r];
          r=r-1;
      }
      z[r+1]=temp;
  }
  for(i=0;i<k;i++)
  {printf("%d ",z[i]);}printf("%d ",sumz);
 for(i=0;i<j;i++){
      temp=v[i];
      r=i-1;
      while((temp<v[r])&&(r>=0)){
      v[r+1]=v[r];
         r=r-1;
      }
      v[r+1]=temp;
  }
  for(i=0;i<j;i++)
  {printf("%d ",v[i]);}printf("%d ",sumv);
    return 0;
}
