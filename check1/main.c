#include <stdio.h>

int main()
{
    int t,i=0;scanf("%d",&t);
    while(i<t)
    {int n;scanf("%d",&n);int j=0,k=0;int arr[n];
    for(j=0;j<n;j++)scanf("%d",&arr[j]);int energy=0;
    for(j=0;j<n;j++)
    {
    	if(arr[j]>arr[j+1])
    	{energy+=arr[j];arr[j+1]=arr[j];}
    	else
    	{energy+=arr[j+1];}
    }
    	printf("%d",energy);
    i++;
    }

    return 0;
}
